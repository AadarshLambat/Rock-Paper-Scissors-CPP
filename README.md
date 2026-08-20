# ✊ Rock Paper Scissors – C++

A simple **console-based Rock Paper Scissors game** developed using C++.

The player selects Rock, Paper, or Scissors, while the computer randomly generates its choice. The program then compares both choices and determines whether the player wins, loses, or draws.

---

## 🎮 Features

* Player can choose:

  * Rock (`r`)
  * Paper (`p`)
  * Scissors (`s`)
* Computer generates a random choice
* Displays both player and computer choices
* Determines the winner automatically
* Handles invalid player input
* Simple command-line interface

---

## 🧠 Concepts Used

This project demonstrates fundamental C++ programming concepts.

### Functions

The program is divided into multiple functions:

```cpp
char playerchoice();
char computerchoice();
void showchoice(char choice);
void displaywinner(char player, char computer);
```

Each function has a specific responsibility, making the program easier to understand and maintain.

### Loops

A `do-while` loop is used to ensure that the player enters a valid choice.

```cpp
do {
    // Take input
} while (choice != 'r' && choice != 's' && choice != 'p');
```

### Conditional Statements

`if-else` statements are used to determine the winner based on the player's and computer's choices.

### Switch Statements

`switch` statements are used for:

* Generating the computer's choice
* Displaying the selected choice
* Determining the winner

### Random Number Generation

The computer's choice is generated using:

```cpp
srand(time(0));
num = rand() % 3 + 1;
```

The generated number is mapped to:

```text
1 → Rock
2 → Paper
3 → Scissors
```

---

## 🎯 Game Rules

The standard Rock Paper Scissors rules are followed:

| Player   | Computer | Result |
| -------- | -------- | ------ |
| Rock     | Rock     | Draw   |
| Rock     | Paper    | Lose   |
| Rock     | Scissors | Win    |
| Paper    | Rock     | Win    |
| Paper    | Paper    | Draw   |
| Paper    | Scissors | Lose   |
| Scissors | Rock     | Lose   |
| Scissors | Paper    | Win    |
| Scissors | Scissors | Draw   |

---

## 🛠️ Technologies Used

* **Language:** C++
* **Type:** Console Application
* **Compiler:** GCC / MinGW / Clang / Visual Studio
* **Standard Libraries:**

  * `<iostream>`
  * `<ctime>`
  * `<cstdlib>`

---

## 💻 Requirements

To run this project, you need:

* A C++ compiler
* C++11 or later recommended
* Terminal / Command Prompt

---

## ▶️ How to Run

### 1. Clone the repository

```bash
git clone https://github.com/YOUR-USERNAME/Rock-Paper-Scissors-CPP.git
```

### 2. Navigate to the project

```bash
cd Rock-Paper-Scissors-CPP
```

### 3. Compile

Using GCC:

```bash
g++ RockPaperScissors.cpp -o RockPaperScissors
```

### 4. Run

Windows:

```bash
RockPaperScissors.exe
```

Linux/macOS:

```bash
./RockPaperScissors
```

---

## 🖥️ Example Output

```text
'r' for Rock
'p' for Paper
's' for Scissors
Enter your choice: r

Player choice is:
Rock

computer choice is:
Scissors

You Won
```

Another possible result:

```text
'r' for Rock
'p' for Paper
's' for Scissors
Enter your choice: p

Player choice is:
Paper

computer choice is:
Paper

Its a tie!
```

---

## 🔄 Program Flow

```text
Start
  |
  v
Player selects Rock/Paper/Scissors
  |
  v
Computer generates random choice
  |
  v
Display both choices
  |
  v
Compare choices
  |
  +---- Player Wins
  |
  +---- Computer Wins
  |
  +---- Draw
  |
  v
End
```

---

## 🚀 Possible Improvements

This is a beginner-level implementation and can be extended with additional features:

* Add multiple rounds
* Keep score of player and computer
* Add a replay option
* Display game statistics
* Add uppercase input support (`R`, `P`, `S`)
* Use modern C++ `<random>` instead of `rand()`
* Create a graphical user interface
* Add different game modes
* Add a best-of-3 or best-of-5 mode

---

## 🎯 Learning Objectives

This project helps practice:

* C++ functions
* Function declarations and definitions
* User input
* `if-else` statements
* `switch` statements
* `do-while` loops
* Character variables
* Random number generation
* Basic game logic
* Console-based programming

---

## 👨‍💻 Author

**Aadarsh Lambat**

C++ | Object-Oriented Programming | Data Structures & Algorithms

---

## 📄 License

This project is available for educational and learning purposes.
