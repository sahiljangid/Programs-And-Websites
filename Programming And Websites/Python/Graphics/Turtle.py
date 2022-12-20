import turtle

sahil = turtle.Turtle()
sahil.shape("turtle")
sahil.getscreen().bgcolor('black')

# sahil.forward(100)
# sahil.left(45)
# sahil.forward(100)
# sahil.right(90)
# sahil.forward(100)

sahil.speed(1000)

sahil.begin_fill()
sahil.color("red")
sahil.pencolor("blue")
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.end_fill()

# sahil.penup()
# sahil.forward(200)
# sahil.pendown()

sahil.begin_fill()
sahil.color("blue")
sahil.pencolor("red")
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.end_fill()

sahil.begin_fill()
sahil.color("yellow")
sahil.pencolor("green")
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.end_fill()

sahil.begin_fill()
sahil.color("green")
sahil.pencolor("yellow")
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(100)
sahil.left(90)
sahil.forward(201)
sahil.end_fill()

sahil.penup()
sahil.right(90)
sahil.forward(102)
sahil.left(90)
sahil.left(90)
sahil.pendown()

up = 201
left = 201
down = 201
right = 201
repeat = 50
increase = 1

for i in range(100):
    for j in range(1):
        sahil.pencolor('fuchsia')
        sahil.forward(up)
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

sahil.penup()
sahil.left(90)
sahil.forward(200)
sahil.right(90)
sahil.forward(100)
sahil.pendown()
sahil.pencolor('DarkOrange')

while 1:
    sahil.left(5)


turtle.done()
