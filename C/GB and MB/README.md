# GB to MB Converter (C)

A simple terminal-based Gigabytes → Megabytes converter written in C, featuring ASCII art and a looping interactive interface.


# Features

* Converts gigabytes (GB) to megabytes (MB).

* Uses the standard conversion: 1 GB = 1024 MB.

* Runs continuously until manually exited.

* Lightweight and dependency-free.


# How It Works

1 Clears the terminal screen.

2 Prompts the user to enter a value in gigabytes.

3 Converts the value to megabytes.

4 Displays the result.

5 Waits for the user to press Enter before restarting.


# Requirements

* C compiler (e.g. gcc).

* Terminal that supports ANSI escape codes (for screen clearing).


# Notes

* The program runs in an infinite loop.

* Exit manually using Ctrl + C.

* No input validation is currently implemented—non-numeric input may cause unexpected behavior.


# License

MIT License

Copyright (c) 2026 John Valinsky

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files, to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.