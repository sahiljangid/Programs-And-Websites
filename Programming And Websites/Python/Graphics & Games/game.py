import sys
import random
import pygame

pygame.init()

Width = 800
Height = 800
Blue = (0, 0, 255)
RED = (255, 0, 0)

player_size = 50
player_pos = [Width/2, Height-2*player_size]

enemy_size = 50
enemy_pos = [random.randint(0,Width,enemy_size), 0]

screen = pygame.display.set_mode((Width, Height))

game_over = False

while not game_over:

    for event in pygame.event.get():

        if event.type == pygame.QUIT:
            sys.exit()

        if event.type == pygame.KEYDOWN:

            x = player_pos[0]
            y = player_pos[1]

            if event.key == pygame.K_LEFT:
                x -= player_size
            elif event.key == pygame.K_RIGHT:
                x += player_size

            player_pos = [x,y]

    screen.fill((0, 0, 0))
    pygame.draw.rect(screen, Blue, (enemy_pos[0], enemy_pos[1], enemy_size, enemy_size))
    pygame.draw.rect(screen, RED, (player_pos[0], player_pos[1], player_size, player_size))

    pygame.display.update()
