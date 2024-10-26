from turtle import Screen, Turtle
from paddle import Paddle
from ball import Ball
from scoreboard import Scoreboard
import time

screen = Screen()
screen.bgcolor("black")
screen.setup(width=2000, height=1000)
screen.title("PONG GAME")
screen.tracer(0)


r_paddle = Paddle((900, 0))
l_paddle = Paddle((-900, 0))
ball = Ball()
scoreboard = Scoreboard()

screen.listen()
screen.onkey(r_paddle.go_up, "Up")
screen.onkey(r_paddle.go_down, "Down")
screen.onkey(l_paddle.go_up, "w")
screen.onkey(l_paddle.go_down, "s")

game_is_on = True
while game_is_on:
    time.sleep(ball.move_speed)
    screen.update()
    ball.move()

    #Detect collisions with wall
    if ball.ycor() > 485 or ball.ycor() < -485:
        ball.bounce_y()

    #Detect collision with paddle
    if ball.distance(r_paddle) < 40 and ball.xcor() > 340 or ball.distance(l_paddle) < 40 and ball.xcor() < -340:
        ball.bounce_x()

    #Detect when r paddle misses
    if ball.xcor() > 940:
        ball.reset_position()
        scoreboard.l_point()

    #Detect when l paddle misses
    if ball.xcor() < -940:
        ball.reset_position()
        scoreboard.r_point()

screen.exitonclick()
