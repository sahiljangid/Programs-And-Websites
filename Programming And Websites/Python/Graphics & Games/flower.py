import turtle

s = turtle.Turtle()
s.getscreen().bgcolor('black')
s.speed(1000)
s.shape('turtle')

for j in range(1):
    for i in range(50):
        s.color('cyan')
        s.circle(150)
        s.color('purple')
        s.circle(140)
        s.color('blue')
        s.circle(130)
        s.color('red')
        s.circle(120)
        s.color('green')
        s.circle(110)
        s.left(430)

turtle.done()