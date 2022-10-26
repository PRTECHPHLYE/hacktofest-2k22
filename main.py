import turtle

import colorgram
from turtle import Screen,Turtle
import random



tim=Turtle()
screen=Screen()
screen.bgcolor("black")
colors_all=[]
turtle.colormode(255)
# for i in range (5):
colors=colorgram.extract('image.jpg', 30)
#     colors_all.append(colors)

for i in range(30):
    a=colors[i]

    rgb = a.rgb
    tup=tuple(rgb)
    colors_all.append(tup)
# print(colors_all)



tim.penup()
tim.setheading(225)
tim.forward(300)
tim.setheading(0)
tim.hideturtle()
turtle.speed(100)
no_dots=100

for i in range (1,101):

    tim.dot(20, random.choice(colors_all))
    tim.penup()
    tim.forward(50)


    if i % 10==0:
        tim.setheading(90)
        tim.penup()
        tim.forward(30)
        tim.setheading(180)
        tim.penup()
        tim.forward(500)
        tim.setheading(0)







screen.exitonclick()


