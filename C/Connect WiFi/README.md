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