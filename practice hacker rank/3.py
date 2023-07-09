import pygame

import random

import math

# Setting

pygame.init()

screen = pygame.display.set_mode((800, 600))

pygame.display.set_caption("William's First Game")

icon = pygame.image.load('money.png')

pygame.display.set_icon(icon)

background = pygame.image.load('colorful.jpg')


# Player

playerImg = pygame.image.load('space-invaders.png')

playerX = 370

playerY = 480

playerX_change = 0


# Enemy

enemyImg = []

enemyX = []

enemyY = []

enemyX_change = []

enemyY_change = []

num_of_enemies = 6


for i in range(num_of_enemies):

    enemyImg.append(pygame.image.load('monster.png'))

    enemyX.append(random.randint(1, 734))

    enemyY.append(random.randint(50, 150))

    enemyX_change.append(1)

    enemyY_change.append(40)


# Bullet

bulletImg = pygame.image.load('bullet.png')

bulletX = 0

bulletY = 480

bulletX_change = 0

bulletY_change = 6

bullet_state = "ready"


score = 0


def fire_bullet(x, y):

    global bullet_state

    bullet_state = "fire"

    screen.blit(bulletImg, (x, y - 20))


def player(x, y):

    screen.blit(playerImg, (x, y))


def enemy(x, y, i):

    screen.blit(enemyImg[i], (x, y))


def isCollision(enemyX, enemyY, bulletX, bulletY):

    distance = math.sqrt(math.pow(enemyX-bulletX, 2) +

                         math.pow(enemyY - bulletY, 2))

    if distance < 27:

        return True

    else:

        return False


# Game Loop

running = True

while running:

    # RGB

    screen.fill((128, 128, 128))

    screen.blit(background, (0, 0))

    for event in pygame.event.get():

        if event.type == pygame.QUIT:

            running = False


        # if keystroke is pressed check left or right

        if event.type == pygame.KEYDOWN:

            if event.key == pygame.K_LEFT:

                playerX_change = -4

            if event.key == pygame.K_RIGHT:

                playerX_change = 4

            if event.key == pygame.K_SPACE:

                if bullet_state is "ready":

                    bulletX = playerX

                    fire_bullet(bulletX, bulletY)


        if event.type == pygame.KEYUP:

            if event.key == pygame.K_LEFT or event.key == pygame.K_RIGHT:

                playerX_change = 0


    playerX += playerX_change


    if playerX <= 0:

        playerX = 0

    elif playerX >= 736:

        playerX = 736


    for i in range(num_of_enemies):

        enemyX[i] += enemyX_change[i]

        if enemyX[i] <= 0:

            enemyX_change[i] = 1

            enemyY[i] += enemyY_change[i]

        elif enemyX[i] >= 736:

            enemyX_change[i] = -1

            enemyY[i] += enemyY_change[i]


        collision = isCollision(enemyX[i], enemyY[i], bulletX, bulletY)

        if collision:

            bulletY = 480

            bullet_state = "ready"

            score += 1

            print(score)

            enemyX[i] = random.randint(1, 734)

            enemyY[i] = random.randint(50, 150)


        enemy(enemyX[i], enemyY[i], i)


    if bulletY <= -80:

        bulletY = 480

        bullet_state = "ready"

    if bullet_state is "fire":

        fire_bullet(bulletX, bulletY)

        bulletY -= bulletY_change


    collision = isCollision(enemyX, enemyY, bulletX, bulletY)

    if collision:

        bulletY = 480

        bullet_state = "ready"

        score += 1

        print(score)

        enemyX = random.randint(1, 734)

        enemyY = random.randint(50, 150)


    player(playerX, playerY)

    pygame.display.update()