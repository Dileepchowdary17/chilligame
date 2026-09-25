Chocolates and Chillies
1. Introduction
Chocolates and Chillies is a simple two-player, turn-based console game developed using the C programming language.

The project is designed around a simple mathematical game in which two players take turns removing chocolates from a common pile. At the beginning of the game, there are 13 chocolates available. During each turn, a player can choose to remove 1, 2, or 3 chocolates.

The objective of the game is to be the player who removes the last remaining chocolate.

Although the rules of the game are simple, the project demonstrates several important programming concepts, including loops, conditional statements, input validation, variables, arithmetic operations, player-state management, and interactive console input/output.

The project was developed as a beginner-level C programming exercise to understand how basic programming concepts can be combined to create a complete interactive program.

2. Project Objective
The main objective of this project is to implement a functional two-player game using fundamental C programming concepts without relying on advanced libraries or complex data structures.

The program should be able to:

Start the game with a fixed number of chocolates.

Display the current number of chocolates.

Allow two players to take turns.

Allow each player to select between 1 and 3 chocolates.

Prevent invalid selections.

Prevent a player from selecting more chocolates than are available.

Update the number of remaining chocolates after every valid move.

Switch the turn between Player 1 and Player 2.

Detect when the last chocolate has been removed.

Declare the player who removed the last chocolate as the winner.

3. Game Rules
The game follows a simple set of rules.

Rule 1: Starting Number of Chocolates
The game starts with:

13 chocolates

The initial value is defined in the program as:

int num = 13;

The variable num represents the number of chocolates remaining in the game.

Rule 2: Number of Players
The game supports exactly two players:

Player 1
Player 2

Player 1 always makes the first move.

The current player is stored using:

int ply = 1;

The value of ply determines whose turn it currently is.

Rule 3: Chocolates That Can Be Taken
During every turn, a player must select between:

1 to 3 chocolates

For example, the following inputs are valid:

1
2
3

The following inputs are invalid:

0
4
5
-1

Rule 4: A Player Cannot Take More Chocolates Than Available
The program also checks whether the player is attempting to remove more chocolates than currently remain.

For example, if the game has only:

2 chocolates

remaining, the player cannot select:

3

The program rejects this input and asks the player to enter another value.

Rule 5: Winning Condition
The player who removes the last remaining chocolate wins the game.

For example:

Remaining chocolates: 3

Player 1 chooses: 3

Remaining chocolates: 0

Player 1 is immediately declared the winner.

4. How the Game Works
The game follows a repeated turn-based process.

At the beginning of the program, the following values are initialized:

int num = 13;
int ply = 1;
int c_k;

These variables represent:

Variable	Purpose
num	Stores the number of chocolates currently remaining
ply	Stores the current player's number
c_k	Stores the number of chocolates selected by the player

The game then enters a loop that continues as long as chocolates remain.

while(num > 0)

This means the game continues until:

num == 0

5. Step-by-Step Program Flow
The complete procedure of the game can be understood through the following steps.

Step 1: Program Starts
The program begins execution from the main() function.

int main()

The initial game values are then assigned:

int num = 13, ply = 1, c_k;

At this point:

Number of chocolates = 13
Current player = Player 1

Step 2: Display Game Introduction
The program displays the name of the game:

Welcome to Chocolates and Chillies Game.

It then displays the basic rules so that the players understand how the game operates.

Step 3: Display Remaining Chocolates
Before every turn, the program displays the number of chocolates currently available.

For example:

The Current number of Chocolates : 13

After a few moves, it might display:

The Current number of Chocolates : 7

This allows the players to know the current state of the game.

Step 4: Ask the Current Player for Input
The program displays the current player's turn:

Player 1's move -->

It then asks the player to enter the number of chocolates they want to remove:

Enter the number of Chocolates(1 to 3):

The input is stored in:

scanf("%d", &c_k);

The value entered by the player is therefore stored in the variable c_k.

6. Input Validation
Input validation is an important part of the program because players should only be allowed to make legal moves.

The program uses a do-while loop:

do {
    ...
} while(c_k < 1 || c_k > 3 || c_k > num);

This ensures that the player is repeatedly asked for input until a valid value is provided.

There are two main validation checks.

Check 1: Value Must Be Between 1 and 3
The program checks:

if(c_k < 1 || c_k > 3)

If the player enters a number below 1 or above 3, the input is rejected.

For example:

Enter the number of Chocolates(1 to 3): 5

Invalid input.
Try again!!

The player is then asked to enter another value.

Check 2: Value Must Not Exceed Remaining Chocolates
The program also checks:

if(c_k > num)

This prevents the player from taking more chocolates than are available.

For example, if only 2 chocolates remain:

The Current number of Chocolates : 2

Player 1's move -->
Enter the number of Chocolates(1 to 3): 3

The program rejects the move because only 2 chocolates are available.

7. Removing Chocolates
Once the player enters a valid number, the selected chocolates are removed from the total.

This is performed using:

num = num - c_k;

For example, if:

num = 13
c_k = 3

then:

num = 13 - 3
num = 10

The game now has 10 chocolates remaining.

The same process occurs after every valid move.

8. Checking for a Winner
After removing chocolates, the program checks:

if(num == 0)

If the result is zero, there are no chocolates left.

This means the current player removed the last chocolate and has therefore won the game.

The program then checks which player made the winning move:

if(ply == 1)

If ply is 1:

Player 1 is the winner

Otherwise:

Player 2 is the winner

The game then reaches its end.

9. Switching Players
If the game has not ended, the program changes the current player.

The code performs this using:

if(ply == 1) {
    ply = 2;
}
else {
    ply = 1;
}

This creates the following turn sequence:

Player 1
   ↓
Player 2
   ↓
Player 1
   ↓
Player 2
   ↓
...

The process continues until one of the players removes the final chocolate.

10. Complete Game Flow
The overall flow of the program can be represented as follows:

Start
  |
  v
Initialize the game
  |
  |-- Chocolates = 13
  |-- Current Player = 1
  |
  v
Display game rules
  |
  v
Display remaining chocolates
  |
  v
Ask current player for number of chocolates
  |
  v
Is the input valid?
  |
  +---- No ----> Display error message
  |                    |
  |                    v
  |              Ask for input again
  |
  +---- Yes
         |
         v
   Remove chocolates
         |
         v
   Are chocolates = 0?
         |
     +---+---+
     |       |
    Yes      No
     |       |
     v       v
 Declare    Switch
 winner     player
     |       |
     |       |
     |       +---------> Display remaining chocolates
     |
     v
    End

11. Example Gameplay
A complete game might look similar to the following:

Welcome to Chocolates and Chillies Game.

----Rule Book----
1.Total Chocolates - 13
2.Player has to choose N.O of Chocolates(1 to 3)
3.The one who empty's the Chocolates 'He is the Winner'

The Current number of Chocolates : 13

Player 1's move -->
Enter the number of Chocolates(1 to 3): 2

The Current number of Chocolates : 11

Player 2's move -->
Enter the number of Chocolates(1 to 3): 3

The Current number of Chocolates : 8

Player 1's move -->
Enter the number of Chocolates(1 to 3): 1

The Current number of Chocolates : 7

Player 2's move -->
Enter the number of Chocolates(1 to 3): 2

The Current number of Chocolates : 5

Player 1's move -->
Enter the number of Chocolates(1 to 3): 2

The Current number of Chocolates : 3

Player 2's move -->
Enter the number of Chocolates(1 to 3): 3

**** Player 2 is the winner ****

The exact winner depends on the moves selected by the players.

12. Handling Invalid Input
The program attempts to ensure that every move follows the rules.

Example: Number Greater Than 3
Player 1's move -->
Enter the number of Chocolates(1 to 3): 6

Invalid input.Try again!!

The program asks the player to enter a valid number.

Example: Number Less Than 1
Player 1's move -->
Enter the number of Chocolates(1 to 3): 0

Invalid input.Try again!!

Again, the program requests another input.

Example: More Chocolates Than Available
Suppose there are 2 chocolates remaining:

The Current number of Chocolates : 2

Player 1's move -->
Enter the number of Chocolates(1 to 3): 3

Invalid input, their is not enough chocolates
Try again!!

The player must choose either 1 or 2.

13. Programming Concepts Used
The project intentionally uses fundamental C programming concepts.

Variables
The program uses variables to maintain the state of the game:

int num = 13;
int ply = 1;
int c_k;

These variables allow the program to keep track of the chocolates, player turn, and player input.

Conditional Statements
if-else statements are used for decision-making.

For example:

if(num == 0)

checks whether the game has ended.

Another conditional statement determines which player should play next.

While Loop
The main game is controlled by:

while(num > 0)

This ensures that the game continues while chocolates are still available.

Do-While Loop
The do-while loop is used for input validation.

It guarantees that every player gets an opportunity to enter a value and that invalid input causes the program to ask again.

User Input
The program uses:

scanf()

to receive input from the players.

Output
The program uses:

printf()

to display instructions, game information, error messages, and the winner.

Arithmetic Operations
The remaining number of chocolates is updated using subtraction:

num = num - c_k;

14. Source Code Structure
The current project consists of a single C source file.

A recommended repository structure is:

chocolates-and-chillies/
│
├── main.c
├── README.md
└── LICENSE

main.c
Contains the complete implementation of the game, including:

Game initialization

Rule display

Player input

Input validation

Chocolate calculation

Player switching

Winner detection

README.md
Contains the documentation for the project, including its purpose, rules, implementation, and instructions for running the program.

LICENSE
Can be added if the project is intended to be distributed or reused under an open-source license.

15. Requirements
To compile and execute the program, you need:

A C compiler

A terminal or command prompt

A computer capable of running a standard C program

The project does not require any external libraries.

The program uses:

#include <stdio.h>

which is part of the standard C library.

16. Compilation
If the source file is named main.c, the program can be compiled using GCC.

gcc main.c -o chocolates_and_chillies

This command tells GCC to:

Read the source file main.c.

Compile the C program.

Create an executable named chocolates_and_chillies.

17. Running the Program
Linux and macOS
After compilation, run:

./chocolates_and_chillies

Windows
If using GCC through MinGW or a similar environment:

chocolates_and_chillies.exe

The program will then start in the terminal.

18. Installation and Setup
No additional packages or dependencies are required.

The basic setup process is:

Clone or download the repository
          |
          v
Open the project directory
          |
          v
Compile main.c
          |
          v
Run the generated executable
          |
          v
Start playing

19. Limitations of the Current Version
The current version intentionally keeps the game simple. Some limitations include:

The starting number of chocolates is fixed at 13.

The maximum number of chocolates that can be taken is fixed at 3.

Only two human players are supported.

Player names cannot currently be customized.

There is no computer-controlled opponent.

There is no score or statistics system.

The game ends after a single round.

The program does not currently handle non-integer input robustly.

For example, entering a character instead of an integer can cause problems with the current scanf()-based input handling.

These limitations provide opportunities for future development.

20. Possible Future Improvements
The project can be expanded in several ways.

Custom Player Names
Instead of displaying:

Player 1
Player 2

the program could ask for player names at the beginning.

For example:

Enter Player 1 name: Alex
Enter Player 2 name: Sam

The game could then display:

Alex's move -->

and:

Sam's move -->

Custom Game Settings
The program could allow players to choose the starting number of chocolates.

For example:

Enter starting number of chocolates: 25

The maximum number of chocolates that can be taken per turn could also become configurable.

Single-Player Mode
A computer-controlled opponent could be added.

The game could provide two modes:

1. Player vs Player
2. Player vs Computer

This would introduce basic artificial intelligence and strategy into the project.

Difficulty Levels
If a computer opponent is added, different difficulty levels could be implemented.

For example:

Easy
Medium
Hard

Different strategies could determine how the computer chooses its move.

Multiple Rounds
The game could be extended to support multiple rounds and maintain a score.

For example:

Player 1: 3 wins
Player 2: 2 wins

The program could continue until one player reaches a predetermined number of victories.

Replay Option
After a game ends, the program could ask:

Do you want to play again? (Y/N):

This would allow multiple games to be played without restarting the program.

Improved Input Handling
The current implementation uses scanf("%d", &c_k) for integer input.

A future version could implement stronger input handling to safely process cases where the user enters:

abc
2.5
1a

instead of a valid integer.

Graphical Interface
The current version is entirely console-based.

A future version could introduce a graphical interface, making the game more visually interactive while keeping the same underlying game logic.

21. Why This Project Is Useful
Although the game is small, it provides a practical way to understand how programming fundamentals work together.

A beginner can learn how to:

Store information using variables.

Receive information from users.

Validate user input.

Repeat operations using loops.

Make decisions using conditions.

Maintain the state of a program.

Implement alternating turns.

Detect a specific end condition.

Build a complete interactive program from a set of rules.

The project therefore serves as a practical introduction to implementing game logic using the C programming language.

22. Conclusion
Chocolates and Chillies is a simple two-player console game based on a turn-based chocolate-removal mechanism.

The game begins with 13 chocolates. Each player takes turns removing 1 to 3 chocolates. The program validates every move, updates the number of chocolates remaining, switches between players, and determines the winner when the final chocolate is removed.

The project focuses on fundamental C programming concepts rather than advanced features. Its simplicity makes it suitable for understanding the relationship between user input, program state, loops, conditional logic, and game rules.

The current implementation provides the foundation for several possible extensions, including configurable game rules, player names, computer opponents, multiple rounds, score tracking, improved input handling, and eventually a graphical interface.

Overall, the project demonstrates how a simple set of game rules can be converted into a functional interactive program using the fundamentals of the C programming language.

23. Author
Developed as a C programming project for practicing fundamental programming concepts, logical thinking, input validation, and interactive game development.
