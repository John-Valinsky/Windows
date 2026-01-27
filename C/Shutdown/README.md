# Windows Shutdown Utility (C)

A simple Windows console application written in C that displays an ASCII banner and asks the user whether to shut down the system.

It accepts both uppercase and lowercase input (Y/y or N/n) and safely initiates a delayed shutdown.


# Features

* ASCII banner display

* User confirmation before shutdown

* Input validation

* 30-second safe shutdown delay

* Windows PATH-based shutdown command


# Requirements

* Windows OS

* GCC/MinGW or MSVC

* Administrator privileges


# Build Instructions

## Using GCC/MinGW
```bash
gcc Shutdown.c Shutdown
```
## Using MSVC
```bash
cl Shutdown.c
```


# Usage

## Run the compiled executable "Shutdown.exe".

* Y or y --> Initiates shutdown (30-second delay).

* N or n --> Cancels and exits.