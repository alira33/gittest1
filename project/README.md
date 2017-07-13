# Project 3 - Pong Game

To compile (Make sure 'lib' directory is already created by entering the command 'make all' outside this directory):
~~~
$ make all
~~~

To run the program in the MSP430 (Make sure the MSP430 is connected to the computer):
~~~
$ make load
~~~

To delete all .o files:
~~~
$ make clean
~~~

Intructions to play game:
~~~
Player 1 (Left Paddle)
S1 - To move up
S2 - To move down

Player 2 (Right Paddle)
S3 - To move up
S4 - To move down
~~~

## Description

This project made me aware of the cool things you can do with a MSP430. I was impressed of all the different types of games
you can make with it. I decided to implement one of the best classic games in the history of gaming, which is Pong. The first
thing I did before starting to program the game, I decided to study the code from the demos Dr. Freudenthal provided in the
repository. Making the paddles and the ball was easy because Dr. Freudenthal has examples in the demos. Also, handling the
collisions between the ball and the field fence was easy because one demo from Dr. Freudenthal shows the logic of it. Making
the buttons interact with the paddles was a little bit easy too but it did took me some time to find out how to implement
the conditional statements for the buttons. Adding the music to the game was also simple since we had already done something
similar for project 2. The hardest part about this project was how to handle the collisions between the paddles and the ball.
I did spent days figuring out how to implement that part of the game. After long hours of trying to figure out how to handle
the collisions between the paddles and the ball, I decided to ask Dr. Freudenthal for help with this part of the game. He
gave me an idea of how to implement the code and what fields of the layers to look at. Before I tried implementing the code, I
checked the "shapeLib" directory to look for a method to help me with the checking of the axes. I found a method called
"abShapeCheck" in the shape.c file, which helped me handle the collisions between the paddles and the ball. This method checks
if a pixel is within the abShape. I had a pretty good time doing this project. I added a shape that I created on my own, which
looks like the letter P to be centered in the middle of the field. I added the letter P to represent the name of the game,
which is "Pong", and placed it in the middle of the field to make it look like a basketball court.
