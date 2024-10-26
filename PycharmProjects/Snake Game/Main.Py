from turtle import Screen
from snake import Snake
from food import Food
from scoreborad import Scoreboard
import time

screen = Screen()
screen.setup(width=600, height=600)
screen.bgcolor("black")
screen.title("!!SNAKE GAME!!")
screen.tracer(0)

snake = Snake()
food = Food()
scoreboard = Scoreboard()

screen.listen()
screen.onkey(snake.up, "Up")
screen.onkey(snake.down, "Down")
screen.onkey(snake.left, "Left")
screen.onkey(snake.right, "Right")

game_is_on = True
while game_is_on:
    screen.update()
    time.sleep(0.1)
    snake.move()

    #Detect collision with food.
    if snake.head.distance(food) < 15:
        food.refresh()
        snake.extend()
        scoreboard.increase_score()

    #Detect collision with wall.
    if snake.head.xcor() > 950 or snake.head.xcor() < -950 or snake.head.ycor() > 482 or snake.head.ycor() < -482:
        scoreboard.reset()
        snake.reset()

    #Detect collision with tail.
    for segment in snake.segments[1:]:
        if segment in snake.segments:
            pass
        elif snake.head.distance(segment) < 10:
            scoreboard.reset()
            snake.reset()

screen.exitonclick()
