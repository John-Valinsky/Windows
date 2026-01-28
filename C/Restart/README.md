# Windows Restart Utility

A lightweight Windows console application written in C that safely prompts the user to restart the system using a simple Y/N confirmation interface.

Developed as a minimal system-control utility with clean input handling and a user-friendly terminal UI.


# Features

* Simple Y/N confirmation prompt.

* Accepts both uppercase and lowercase input.

* Clears screen for a clean UI.

* Uses native Windows shutdown command.

* Prevents accidental restarts.

* Lightweight and fast.


# Requirements

* Operating System - Windows.

* Compiler - GCC (MinGW), MSVC, or any Windows-compatible C compiler.

* Headers Used: stdio.h, stdlib.h, windows.h, conio.h, ctype.h


# Compilation
```bash
gcc restart.c -o restart
```


# Using MSVC
```bash
cl restart.c
```


# Usage

1 Run the executable.

2 Choose - Y (Restart System) or N (Exit safely).

3 Any invalid input will re-prompt.


# How it works

* Clears the console using system("cls").

* Converts input to uppercase using toupper().

* Executes
```bash
system("shutdown -r -t 0");
```


# Disclaimer

This program executes a system restart command.
Use responsibly. The author is not responsible for data loss due to unsaved work.


# License

Free for personal and educational use.
Add a license file (MIT recommended) if redistributing.