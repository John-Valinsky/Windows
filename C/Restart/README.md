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

