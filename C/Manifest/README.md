# Manifest Injector (C)

A simple C command-line utility that embeds a Windows .manifest file into an existing .exe using Microsoft’s mt.exe tool.

Perfect for quickly adding UAC settings, DPI awareness, or execution level manifests to compiled executables without touching Visual Studio project settings.


# Features

* Interactive CLI prompts.

* Automatically constructs and runs the mt.exe command.

* Works with any existing Windows executable.

* Lightweight, no dependencies beyond mt.exe.