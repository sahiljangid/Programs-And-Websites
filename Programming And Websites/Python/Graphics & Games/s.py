import turtle

s = turtle.Turtle()
s.shape('turtle')
s.speed(100)
s.getscreen().bgcolor('black')

s1 = turtle.Turtle()
s1.shape('turtle')
s1.speed(100)

s1.pencolor('red')
s1.penup()
s1.left(90)
s1.forward(70)
s1.left(90)
s1.forward(50)

s.penup()
s.left(90)
s.forward(50)
s.right(90)
s.pendown()

for i in range(10):
    s.pencolor('#CC00FF')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

for i in range(75):
    s.pencolor('#FF0099')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(89.5)
    s.forward(1)
    s.right(88)

s.right(10)
for i in range(10):
    s.pencolor('#FF00CC')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

s.left(10)

for i in range(20):
    s.pencolor('#FF00FF')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(89.5)
    s.forward(1)
    s.right(88)

s.right(10)
for i in range(50):
    s.pencolor('#9900FF')
    s.forward(50)
    s.left(90.5)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

s.right(10)
for i in range(30):
    s.pencolor('#0062FF')
    s.forward(50)
    s.left(88)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

for i in range(10):
    s.pencolor('#099FFF')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

s.right(10)
for i in range(70):
    s.pencolor('#00FFFF')
    s.forward(50)
    s.left(89.5)
    s.forward(1)
    s.left(88)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)


for i in range(10):
    s.pencolor('#CC00FF')
    s.forward(50)
    s.left(90)
    s.forward(1)
    s.left(90)
    s.forward(50)
    s.right(90)
    s.forward(1)
    s.right(90)

s.pencolor('yellow')
s.penup()
s.forward(90)
s.right(90)
s.forward(20)

i = 1
while i <= 50:
    s.left(10)
    s1.right(10)
    i = i + 1


turtle.done()
