import turtle
import turtle as y

y.getscreen().bgcolor('black')
y.shape('turtle')
y.speed(10)

y.penup()
y.backward(100)
y.right(90)
y.forward(150)
y.left(90)
y.pendown()

y.pencolor("red")
y.begin_fill()
y.color("red")
y.forward(250)

# Height First
for i in range(46):
    y.left(2)
    y.forward(1)
y.right(2)
y.forward(200)

# Width First
for i in range(46):
    y.left(2)
    y.forward(1)
y.right(2)
y.forward(300)

# Height second
for i in range(46):
    y.left(2)
    y.forward(1)
y.right(2)
y.forward(199.5)

# Width second
for i in range(46):
    y.left(2)
    y.forward(1)
y.right(2)
y.forward(50)
y.end_fill()

y.penup()
y.left(90)
y.forward(130)
y.right(90)
y.forward(160)
y.pendown()

y.begin_fill()
y.color("white")
y.right(25)
y.backward(130)
y.right(65)
y.forward(120)
y.right(61)
y.backward(134.5)
y.right(65)
y.end_fill()

y.penup()
y.left(180)
y.forward(200)
y.right(90)
y.forward(17)
y.left(90)
y.left(36)
y.backward(312)
y.pendown()


# border start
i = 1
while i <= 2:
    y.forward(250)

    # Height First
    for i in range(46):
        y.left(2)
        y.forward(1)
    y.right(2)
    y.forward(200)

    # Width First
    for i in range(46):
        y.left(2)
        y.forward(1)
    y.right(2)
    y.forward(300)

    # Height second
    for i in range(46):
        y.left(2)
        y.forward(1)
    y.right(2)
    y.forward(200)

    # Width second
    for i in range(46):
        y.left(2)
        y.forward(1)
    y.right(2)
    y.forward(50)
    i = i + 1

turtle.done()
