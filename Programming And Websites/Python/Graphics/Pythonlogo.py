import turtle

# for top side

t = turtle.Turtle()

t.speed(10)
t.shape('turtle')
t.getscreen().bgcolor('black')

t.penup()
t.back(70)
t.left(90)
t.forward(50)
t.right(90)
t.pendown()

t.pensize(10)
t.pencolor('white')
t.forward(150)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(110)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(80)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(10)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(30)

t.right(90)
t.forward(20)

t.right(90)
t.forward(190)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(200)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(40)

for i in range(46):
    t.left(2)
    t.forward(1)
t.right(2)
t.forward(121)

for i in range(46):
    t.right(2)
    t.forward(1)
t.left(2)
t.forward(2)
t.hideturtle()
# for top color
ct = turtle.Turtle()
ct.speed(10)
ct.pencolor('blue')
ct.shape('circle')

ct.pensize(20)
ct.penup()
ct.back(55)
ct.left(90)
ct.forward(60)
ct.right(90)
ct.pendown()

ct.forward(131)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(102)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(72)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(2)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(38)

ct.right(90)
ct.forward(41)

ct.right(90)
ct.forward(197)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(192)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(30)

for i in range(36):
    ct.left(2.5)
    ct.forward(1)
# ct.right()
ct.forward(130)

ct.pensize(28)
for i in range(41):
    ct.right(2)
    ct.forward(1)
ct.left(2)
ct.pensize(30)
ct.forward(120)
ct.right(2)
ct.pensize(35)
ct.forward(40)
ct.left(80)
ct.forward(95)
ct.left(90)
ct.forward(80)
ct.back(50)
ct.left(90)
ct.forward(90)
ct.right(90)
ct.forward(210)
ct.left(90)
ct.forward(200)
ct.left(90)
ct.forward(35)
ct.left(90)
ct.forward(130)
ct.pensize(40)
ct.forward(45)
ct.right(90)
ct.forward(47)
ct.hideturtle()

# for bottom side
b = turtle.Turtle()
b.speed(10)
b.shape('turtle')
b.getscreen().bgcolor('black')
b.pencolor('white')
b.pensize(10)

b.penup()
b.left(90)
b.forward(10)
b.right(90)
b.back(30)
b.pendown()

b.forward(150)

for i in range(46):
    b.left(2)
    b.forward(1)
b.right(2)
b.forward(70)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(40)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(150)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(180)

b.left(90)
b.forward(20)

b.left(90)
b.forward(70)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(15)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(128)

for i in range(46):
    b.right(2)
    b.forward(1)
b.left(2)
b.forward(117)

for i in range(46):
    b.right(2.1)
    b.forward(1)

b.hideturtle()

# for bottom color

cb = turtle.Turtle()
cb.speed(10)
cb.pencolor('yellow')
cb.shape('circle')
cb.pensize(10)

cb.penup()
cb.right(90)
cb.back(4)
cb.left(90)
cb.back(26)
cb.pendown()

cb.forward(150)

for i in range(20):
    cb.left(2.5)
    cb.forward(1)

for i in range(5):
    cb.left(2)
    cb.forward(1)
cb.right(16)
for i in range(15):
    cb.left(.3)
    cb.forward(1)
cb.left(41)
cb.forward(80)

for i in range(30):
    cb.right(2)
    cb.forward(1)
cb.right(30)
cb.forward(45)

for i in range(30):
    cb.right(2)
    cb.forward(1)
cb.right(29.5)
cb.forward(157)

for i in range(30):
    cb.right(2)
    cb.forward(1)
cb.right(30)
cb.forward(195)

cb.left(90)
cb.forward(33)

cb.left(90)
cb.forward(73)

cb.left(4)
for i in range(30):
    cb.right(2)
    cb.forward(1)
cb.right(34)
cb.forward(20)

cb.left(4)

for i in range(33):
    cb.right(2)
    cb.forward(1)
cb.right(28)
cb.forward(131)

cb.left(4)
for i in range(33):
    cb.right(2)
    cb.forward(1)
cb.right(28)
cb.forward(129)

cb.right(19)
for i in range(46):
    cb.right(2)
    cb.forward(1)
cb.right(28)

cb.right(110)
cb.forward(10)
cb.pensize(20)
cb.forward(20)
cb.left(160)
cb.forward(190)
cb.left(70)
cb.pensize(30)
cb.forward(50)
cb.left(20)
cb.forward(70)
cb.right(90)
cb.forward(52)

cb.right(90)
cb.forward(160)

cb.right(90)
cb.forward(30)

cb.right(90)
cb.forward(150)
cb.back(127)

cb.pensize(80)
cb.left(90)
cb.forward(30)
cb.pensize(50)
cb.forward(190)
cb.left(90)
cb.pensize(30)
cb.forward(20)
cb.left(90)
cb.forward(170)
cb.back(175)
cb.right(90)
cb.forward(90)
cb.left(89)
cb.forward(140)
cb.left(90)
cb.forward(20)
cb.left(90)
cb.forward(113)
cb.right(90)
cb.forward(50)
cb.right(90)
cb.forward(15)
cb.right(90)
cb.forward(65)
cb.left(90)
cb.pensize(60)
cb.back(30)
cb.forward(110)
cb.hideturtle()

# for circle

c = turtle.Turtle()
c.speed(10)
c.shape('turtle')
c.getscreen().bgcolor('black')
c.pencolor('white')

c.penup()
c.left(90)
c.forward(170)
c.right(90)
c.forward(10)
c.pendown()

c.begin_fill()
c.color('white')
c.circle(15)
c.end_fill()

c.penup()
c.right(90)
c.forward(310)
c.left(90)
c.forward(90)
c.pendown()

c.begin_fill()
c.color('white')
c.circle(15)
c.end_fill()

c.hideturtle()

turtle.done()
