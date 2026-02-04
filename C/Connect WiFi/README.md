# WiFi Security Info Viewer

A Windows-based C program that lists saved WiFi profiles on your system and displays their security settings using the netsh command-line utility.

Built for learning, auditing, and understanding how Windows stores WiFi profile information.


# Features

* Lists all saved WiFi profiles on the system.

* Allows user to select a WiFi profile by name.

* Displays Security Settings of the selected profile.

* Colored terminal output for better readability.

* Uses native Windows commands (netsh).

* Lightweight & fast (pure C, no dependencies).


# How It Works

1 Executes to list saved WiFi profiles.
```bash
netsh wlan show profile
```

2 Parses and displays only the profile names.

3 Prompts the user to enter a profile name.

4 Executes and prints the Security settings section only.
```bash
netsh wlan show profile name="PROFILE_NAME" key=clear
```


# Sample Output
```bash
Available WiFi Profiles:

Home_WiFi
Office_Network
Mobile_Hotspot

Enter the WiFi profile name: Home_WiFi

Security settings
-----------------
Authentication         : WPA2-Personal
Cipher                 : CCMP
Security key           : Present
```


# Requirements

* Windows OS.

* GCC / MinGW / MSVC compiler.

* Administrator privileges (recommended).


# Disclaimer

* Does not hack WiFi networks

* Only reads locally stored WiFi profiles.

* Should be used for educational, debugging, or administrative purposes only.


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