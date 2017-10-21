import turtle

def main():
    window = turtle.Screen()
    turtleWriter = turtle.Turtle()
    turtleWriter.hideturtle()
    turtleWriter.up()
    turtleWriter.back(350)
    turtleWriter.left(90)
    turtleWriter.back(75)
    turtleWriter.showturtle()
    turtleWriter.speed(1)
    turtleWriter.down()
    turtleWriter.write("Hello World",True,"left",("Arial",100,"normal"))
    window.mainloop()

main()