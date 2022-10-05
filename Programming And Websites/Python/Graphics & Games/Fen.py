import turtle

fen = turtle.Turtle()

fen.penup()
fen.right(90)
fen.forward(20)
fen.left(135)
fen.pendown()

fen.getscreen().bgcolor('yellow')
fen.color('blue')

# For circle
for i in range(80):
    fen.forward(5)
    fen.left(5)

# For first wings
fen.right(90)
fen.forward(20)
fen.right(90)
fen.forward(10)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(40)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(10)
fen.right(90)
fen.forward(23)
fen.right(80)

fen.penup()
fen.forward(55)
fen.left(96.5)
fen.forward(52)
fen.pendown()

# For second wings
fen.right(95)
fen.forward(20)
fen.right(90)
fen.forward(10)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(40)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(10)
fen.right(90)
fen.forward(23)
fen.right(85)

fen.penup()
fen.forward(55)
fen.left(97)
fen.forward(52)
fen.pendown()

# For third wings

fen.right(90)
fen.forward(20)
fen.right(90)
fen.forward(10)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(40)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(10)
fen.right(90)
fen.forward(22)
fen.right(80)

fen.penup()
fen.forward(55)
fen.left(98)
fen.forward(30)
fen.pendown()

# For fourth wings

fen.right(120)
fen.forward(20)
fen.right(90)
fen.forward(10)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(40)
fen.left(90)
fen.forward(200)
fen.left(90)
fen.forward(10)
fen.right(90)
fen.forward(22)
fen.right(80)

turtle.done()
