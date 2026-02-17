import turtle
import math
import time

# -------------------------------
# Screen Setup
# -------------------------------
screen = turtle.Screen()
screen.bgcolor("black")
screen.title("Rotating 3D Cube - Perspective Projection")
screen.tracer(0)

pen = turtle.Turtle()
pen.speed(0)
pen.pensize(2)
pen.color("cyan")
pen.hideturtle()

# -------------------------------
# Cube Data
# -------------------------------

# Cube vertices (x, y, z)
vertices = [
    [-50, -50, -50], [50, -50, -50], [50, 50, -50], [-50, 50, -50],  # Back
    [-50, -50, 50], [50, -50, 50], [50, 50, 50], [-50, 50, 50]      # Front
]

# Edges between vertices
edges = [
    (0, 1), (1, 2), (2, 3), (3, 0),
    (4, 5), (5, 6), (6, 7), (7, 4),
    (0, 4), (1, 5), (2, 6), (3, 7)
]

angle = 5

# -------------------------------
# Rotation Functions
# -------------------------------

def rotate_x(point, angle):
    rad = math.radians(angle)
    y = point[1] * math.cos(rad) - point[2] * math.sin(rad)
    z = point[1] * math.sin(rad) + point[2] * math.cos(rad)
    return (point[0], y, z)

def rotate_y(point, angle):
    rad = math.radians(angle)
    x = point[0] * math.cos(rad) + point[2] * math.sin(rad)
    z = -point[0] * math.sin(rad) + point[2] * math.cos(rad)
    return (x, point[1], z)

def rotate_z(point, angle):
    rad = math.radians(angle)
    x = point[0] * math.cos(rad) - point[1] * math.sin(rad)
    y = point[0] * math.sin(rad) + point[1] * math.cos(rad)
    return (x, y, point[2])

# -------------------------------
# Perspective Projection
# -------------------------------

def project(point):
    distance = 300
    factor = distance / (distance + point[2])
    x = point[0] * factor
    y = point[1] * factor
    return (x, y)

# -------------------------------
# Drawing Function
# -------------------------------

def draw_cube():
    global angle
    pen.clear()

    transformed = []

    for vertex in vertices:
        rotated = rotate_x(vertex, angle)
        rotated = rotate_y(rotated, angle)
        rotated = rotate_z(rotated, angle / 2)
        projected = project(rotated)
        transformed.append(projected)

    for edge in edges:
        p1 = transformed[edge[0]]
        p2 = transformed[edge[1]]

        pen.penup()
        pen.goto(p1)
        pen.pendown()
        pen.goto(p2)

    screen.update()
    angle += 2

# -------------------------------
# Animation Loop
# -------------------------------

while True:
    draw_cube()
    time.sleep(0.03)
