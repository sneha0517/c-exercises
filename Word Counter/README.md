# Word Counter

## Description
The Word Counter is a command-line tool written in C that reads a text file and provides the following statistics:
- Total number of characters.
- Total number of words.
- Total number of lines.

This project demonstrates the use of text processing in C.

---

## How to Run

### 1. Prerequisites
- A GCC compiler installed and configured in your system PATH.

### 2. Steps to Compile
1. Open a terminal or Git Bash, navigate to the project directory, compile the program, and run it with the desired input file:
   ```bash
   cd /path/to/WordCounter
   gcc word_counter.c -o word_counter
   ./word_counter example.txt
   ```


---
## Example of input and expected output
Input file (example.txt)
   ```vbnet
   There once lived an old man and an old woman who were peasants and had to work hard to earn their daily bread. The old man used to go to fix fences and do other odd jobs for the farmers around, and while he was gone the old woman, his wife, did the work of the house and worked in their own little plot of land.
   ```

---
Output
   ```makefile
   File: example.txt
   Characters: 311
   Words: 66
   Lines: 1
   ```

---

### Future Enhancements
- [ ] Add a password strength indicator (weak, medium, strong) based on length and complexity.
- [ ] Save generated passwords to a secure file or encrypted database.
- [ ] Add an option to regenerate a new password with the same criteria.
- [ ] Provide localization/multilanguage support for the GUI.
- [ ] Offer a "Password History" feature to view recently generated passwords.




