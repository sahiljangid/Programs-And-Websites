import turtle

sahil = turtle.Turtle()
jangid = turtle.Turtle()
turtle1 = turtle.Turtle()
turtle2 = turtle.Turtle()

sahil.getscreen().bgcolor('black')

# sahil turtle
sahil.shape("turtle")
sahil.speed(2000)

up = 1
left = 1
down = 1
right = 1
repeat = 50
increase = 1

for i in range(50):
    for j in range(1):
        sahil.pencolor('red')
        sahil.forward(up)
        sahil.penup()
        sahil.forward(increase)
        sahil.left(90)
        sahil.pendown()
        sahil.left(90)
        sahil.forward(left)
        sahil.left(90)
        sahil.forward(down)
        sahil.left(90)
        sahil.forward(right)

        sahil.penup()
        sahil.forward(increase)
        sahil.left(90)
        sahil.down()

    up = up + 2
    left = left + 2
    down = down + 2
    right = right + 1
    increase = increase + 1

# jangid turtle
jangid.shape("turtle")
jangid.speed(2000)

up = 2
left = 2
down = 2
right = 2
repeat = 50
increase = 3

for i in range(40):
    for j in range(1):
        jangid.pencolor('blue')
        jangid.forward(up)
        jangid.penup()
        jangid.forward(increase)
        jangid.left(90)
        jangid.pendown()
        jangid.left(90)
        jangid.forward(left)
        jangid.left(90)
        jangid.forward(down)
        jangid.left(90)
        jangid.forward(right)

        jangid.penup()
        jangid.forward(increase)
        jangid.left(90)
        jangid.down()

    up = up + 2
    left = left + 2
    down = down + 2
    right = right + 1
    increase = increase + 1

# turtle1
turtle1.shape("turtle")
turtle1.speed(2000)

up = 3
left = 3
down = 3
right = 3
repeat = 50
increase = 5

for i in range(29):
    for j in range(1):
        turtle1.pencolor('DarkOrange')
        turtle1.forward(up)
        turtle1.penup()
        turtle1.forward(increase)
        turtle1.left(90)
        turtle1.pendown()
        turtle1.left(90)
        turtle1.forward(left)
        turtle1.left(90)
        turtle1.forward(down)
        turtle1.left(90)
        turtle1.forward(right)

        turtle1.penup()
        turtle1.forward(increase)
        turtle1.left(90)
        turtle1.down()

    up = up + 2
    left = left + 2
    down = down + 2
    right = right + 1
    increase = increase + 1

# turtle2
turtle2.shape("turtle")
turtle2.speed(2000)

up = 4
left = 4
down = 4
right = 4
repeat = 50
increase = 7

for i in range(19):
    for j in range(1):
        turtle2.pencolor('red')
        turtle2.forward(up)
        turtle2.penup()
        turtle2.forward(increase)
        turtle2.left(90)
        turtle2.pendown()
        turtle2.left(90)
        turtle2.forward(left)
        turtle2.left(90)
        turtle2.forward(down)
        turtle2.left(90)
        turtle2.forward(right)

        turtle2.penup()
        turtle2.forward(increase)
        turtle2.left(90)
        turtle2.down()

    up = up + 2
    left = left + 2
    down = down + 2
    right = right + 1
    increase = increase + 1

turtle.done()
