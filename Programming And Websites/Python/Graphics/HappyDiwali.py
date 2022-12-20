import turtle

wn = turtle.Screen()
wn.title("Happy Diwali")
wn.bgpic("d.gif")
wn.screensize(700, 700)

# for HAPPY
h = turtle.Turtle()
h.hideturtle()
h.shape('circle')

# for HAPPY
h.pensize(10)
h.penup()
h.back(150)
h.left(90)
h.forward(200)
h.pendown()
h.pencolor('#D29A16')

# for H
h.back(80)
h.forward(40)
h.right(90)
h.forward(40)
h.left(90)
h.forward(40)
h.back(80)

# for A
h.penup()

h.right(90)
h.forward(25)
h.pendown()

h.left(70)
h.forward(80)
h.right(140)
h.forward(80)
h.back(30)
h.left(250)
h.forward(30)

# for P
h.penup()
h.left(90)
h.forward(30)
h.left(90)
h.forward(65)
h.pendown()

h.left(90)
h.forward(80)
h.right(90)
h.forward(23)
for i in range(30):
    h.right(6)
    h.forward(2)
h.forward(20)

# for P
h.penup()
h.left(90)
h.forward(42)
h.left(90)
h.forward(60)
h.pendown()

h.left(90)
h.forward(80)
h.right(90)
h.forward(23)
for i in range(30):
    h.right(6)
    h.forward(2)
h.forward(20)

# for Y

h.penup()
h.left(90)
h.forward(42)
h.left(90)
h.forward(90)
h.pendown()

h.left(90)
h.forward(40)
h.left(40)
h.forward(50)
h.back(50)
h.right(80)
h.forward(50)


# for DIWALI

d = turtle.Turtle()
d.hideturtle()
d.shape('circle')
d.pencolor('#E462AA')
d.pensize(20)

d.penup()
d.back(260)
d.left(90)
d.pendown()

d.forward(70)
d.right(90)

d.forward(30)

for i in range(30):
    d.right(6)
    d.forward(5)
d.forward(25)
d.right(90)
d.forward(25)

# for I

d.penup()
d.back(21)
d.right(90)
d.forward(100)
d.pendown()

d.forward(80)
d.back(40)
d.left(90)
d.forward(90)
d.left(90)
d.forward(40)
d.right(180)
d.forward(80)

# for W

d.penup()
d.right(90)
d.forward(90)
d.left(90)
d.forward(45)
d.pendown()

d.left(100)
d.forward(90)
d.back(90)
d.right(55)
d.forward(30)
d.right(90)
d.forward(30)
d.left(120)
d.forward(90)

# for A
d.penup()
d.right(165)
d.forward(90)
d.left(90)
d.forward(10)
d.pendown()

d.left(70)
d.forward(90)
d.right(140)
d.forward(90)
d.back(30)
d.right(108)
d.forward(35)

# for L

d.penup()
d.back(50)
d.left(90)
d.forward(29)
d.left(88)
d.forward(20)
d.pendown()

d.left(90)
d.forward(90)
d.back(90)
d.right(90)
d.forward(50)

# for I

d.penup()
d.forward(30)
d.pendown()

d.forward(80)
d.back(40)
d.left(90)
d.forward(90)
d.left(90)
d.forward(40)
d.right(180)
d.forward(80)

turtle.done()
