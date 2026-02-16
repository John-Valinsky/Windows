# Manifest Injector (C)

A simple C command-line utility that embeds a Windows .manifest file into an existing .exe using Microsoft’s mt.exe tool.

Perfect for quickly adding UAC settings, DPI awareness, or execution level manifests to compiled executables without touching Visual Studio project settings.


# Features

* Interactive CLI prompts.

* Automatically constructs and runs the mt.exe command.

* Works with any existing Windows executable.

* Lightweight, no dependencies beyond mt.exe.


# Preview
```bash
___  ___               _   __             _   
|  \/  |              (_) / _|           | |  
| .  . |  __ _  _ __   _ | |_   ___  ___ | |_ 
| |\/| | / _` || '_ \ | ||  _| / _ \/ __|| __|
| |  | || (_| || | | || || |  |  __/\__ \| |_ 
\_|  |_/ \__,_||_| |_||_||_|   \___||___/ \__|

==============================================
        ~ ~  By John Valinsky  ~ ~
==============================================
```


# Requirements

* Windows

* Microsoft Manifest Tool (mt.exe)

    * Visual Studio

    * Windows SDK