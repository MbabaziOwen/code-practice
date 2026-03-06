
import pygame

pygame.init()
window = pygame.display.set_mode((1000, 800))

robot = pygame.image.load("C:\code-practice\code-practice\OpenGL\dvdplayerlogo.png")
robot = pygame.transform.scale(robot, (256, 256))  # change 200, 100 to whatever size you want

x = 50
y = 50
velocity = 1
clock = pygame.time.Clock()

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            exit()

    window.fill((0, 0, 0))
    window.blit(robot, (x, y))
    pygame.display.flip()
    
    x += velocity
    if velocity > 0 and x+robot.get_width() >= 1000:
        velocity = -velocity
    if velocity < 0 and x <= 0:
        velocity = -velocity

    clock.tick(120)