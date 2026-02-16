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

Make sure mt.exe is available in your PATH, or run the program from a Developer Command Prompt.


# Usage

Compile the program
```bash
gcc manifest_injector.c -o manifest_injector
```

Run it:
```bash
manifest_injector
```

Follow the prompts
```bash
Enter the name of the .exe file:
Enter the name of the .manifest file (e.g., app.manifest):
```

The tool will execute
```bash
mt.exe -manifest "your.manifest" -outputresource:"your.exe";1
```


# Limitations

* The .exe and .manifest must exist in the working directory (or use full paths).

* Errors usually mean

    * mt.exe isn’t installed or on PATH

    * File names are incorrect

* This tool does not validate manifest contents.


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