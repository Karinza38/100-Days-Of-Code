from turtle import Turtle

t = Turtle()
t.penup()
t.goto(0, 0)

def draw_square(size, color):
    t.pendown()
    t.color(color)
    for x in range(4):
        t.forward(size)
        t.right(90)
    t.penup()

def draw_circle(size, color):
    t.pendown()
    t.color(color)
    for x in range(36):
        t.forward(size)
        t.right(10)
    t.penup()


while True:
    t.speed(100)
    draw_square(100, "red")
    draw_circle(20, "blue")
    t.right(10)
