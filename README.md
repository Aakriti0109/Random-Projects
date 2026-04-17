# 🎯 1. Quiz Game in C++

A simple console-based Quiz Game built using C++. This project asks multiple-choice questions to the user and calculates the final score based on correct answers.

---

## 🚀 Features

- Multiple-choice quiz questions
- Instant answer checking
- Score calculation at the end
- Simple and interactive console interface

---

## 🛠️ Technologies Used

- C++
- Standard Input/Output (iostream)

---
# 🔐 2. Password Generator in C++

A simple and secure console-based Password Generator built using C++. This application generates strong and random passwords based on user-defined length using a mix of characters.

---

## 🚀 Features

- Generate random passwords instantly
- Custom password length
- Uses uppercase, lowercase, numbers, and special characters
- Simple and easy-to-use console interface

---

## 🛠️ Technologies Used

- C++
- Standard Libraries (`iostream`, `cstdlib`, `ctime`)

---
# 3.🎮 Guess The Number Game (Java)

## 📌 Description

A fun and interactive Java-based console game where the player tries to guess a randomly generated number within a limited number of attempts. The game includes multiple difficulty levels and provides hints to guide the player.

---

## 🚀 Features

* 🎯 Multiple difficulty levels (Easy, Medium, Hard)
* 🔢 Random number generation
* 📉 Hints for incorrect guesses (Too High / Too Low)
* ⏳ Limited attempts based on difficulty
* 🏆 Win/Lose result display
* 💻 Simple and beginner-friendly Java implementation

---

## 🧠 Difficulty Levels

| Level  | Range   | Attempts |
| ------ | ------- | -------- |
| Easy   | 1 – 50  | 10       |
| Medium | 1 – 100 | 7        |
| Hard   | 1 – 200 | 5        |

---

## 🛠️ Technologies Used

* Java
* Scanner (for user input)
* Random class (for number generation)

---

## ▶️ How to Run

1. Clone the repository:

   ```bash
   git clone https://github.com/your-username/guess-the-number-game.git
   ```

2. Navigate to the project folder:

   ```bash
   cd guess-the-number-game
   ```

3. Compile the program:

   ```bash
   javac GuessTheNumberGame.java
   ```

4. Run the program:

   ```bash
   java GuessTheNumberGame
   ```

---

## 🎮 How to Play

1. Choose a difficulty level.
2. The system will generate a random number.
3. Enter your guesses within the allowed attempts.
4. Use hints ("Too High" or "Too Low") to improve your guesses.
5. Win by guessing correctly before attempts run out!

---

## 📸 Sample Output

```
🎮 Welcome to Guess the Number Game!
Choose Difficulty Level:
1. Easy
2. Medium
3. Hard

Enter your choice: 2

I have chosen a number between 1 and 100
Attempt 1/7: Enter your guess: 50
📉 Too low!
...
🎉 Congratulations! You guessed it right!
```

---

## 📌 Future Enhancements

* 🔁 Option to replay the game
* 📊 Score tracking system
* 🎵 Sound effects
* 🖥️ GUI version using Java Swing or JavaFX

---

## 🤝 Contributing

Contributions are welcome! Feel free to fork this repository and submit a pull request.

---

## 📄 License

This project is open-source and available under the MIT License.

---


# 4🎮 Tic Tac Toe (C++)

A simple and interactive **console-based Tic Tac Toe game** built using C++. This project demonstrates basic programming concepts like arrays, loops, condition checking, and user input handling.

---

## 📌 Overview

Tic Tac Toe is a classic two-player game played on a 3×3 grid. Players take turns marking a cell with their symbol (**X** or **O**) with the goal of getting three in a row.

---

## 🚀 Features

* 👥 Two-player mode (Player X vs Player O)
* ✅ Input validation to prevent invalid moves
* 🧠 Win detection (rows, columns, diagonals)
* 🤝 Draw detection when board is full
* 🖥️ Simple and clean console interface

---

## 🛠️ Tech Stack

* Language: **C++**
* Libraries: Standard Library (`iostream`)

---

## 📂 Project Structure

```
tic-tac-toe-cpp/
│
├── src/
│   └── main.cpp
│
├── README.md
└── .gitignore
```

---

## ▶️ How to Run

### 1. Clone the Repository

```bash
git clone https://github.com/your-username/tic-tac-toe-cpp.git
```

### 2. Navigate to Source Folder

```bash
cd tic-tac-toe-cpp/src
```

### 3. Compile the Program

```bash
g++ main.cpp -o tic
```

### 4. Run the Game

```bash
./tic
```

---

## 🎯 How to Play

* The board positions are numbered from **1 to 9**
* Players take turns entering a number
* The number corresponds to the position on the grid
* First player to get **3 in a row** (horizontal, vertical, diagonal) wins
* If all positions are filled without a winner → **Draw**

---

## 🧩 Example Board

```
1 | 2 | 3
--+---+--
4 | 5 | 6
--+---+--
7 | 8 | 9
```

---

## 📈 Future Enhancements

* 🤖 Single-player mode with AI
* 🎨 Graphical User Interface (GUI)
* 💾 Score tracking system
* 🌐 Multiplayer (online)

---

## 🤝 Contributing

Contributions are welcome! Feel free to fork the repo and submit a pull request.

---

## 📜 License

This project is open-source and available under the MIT License.

---
# 🔁5 Palindrome Checker (C++)

## 📌 Overview

This is a simple C++ program that checks whether a given word is a **palindrome** or not.

A palindrome is a word, number, or string that reads the same forward and backward.
Examples:

* `madam`
* `racecar`
* `level`

---

## ⚙️ How It Works

1. The program takes a word as input from the user.
2. It reverses the word using a loop.
3. It compares the original word with the reversed one.
4. If both match → it's a palindrome. Otherwise → it's not.




## ▶️ How to Run

1. Save the file as `palindrome.cpp`
2. Compile the code:

   ```
   g++ palindrome.cpp -o palindrome
   ```
3. Run the program:

   ```
   ./palindrome
   ```

---

## 🧪 Sample Run

```
Enter a word: madam
It's a palindrome!
```

```
Enter a word: hello
Not a palindrome.
```

---

## 🚀 Future Improvements

* Allow full sentences (ignore spaces and punctuation)
* Make it case-insensitive (e.g., "Madam")
* Add a loop to check multiple inputs
* Use functions for cleaner code

---

## 📚 Concepts Used

* Strings
* Loops (`for`)
* Conditional statements (`if-else`)

---


