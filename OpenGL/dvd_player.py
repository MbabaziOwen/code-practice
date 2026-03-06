
import pygame

pygame.init()
window = pygame.display.set_mode((1000, 1000))

robot = pygame.image.load("C:\code-practice\code-practice\OpenGL\dvdplayerlogo.png")

x = 0
y = 0
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

    clock.tick(60)