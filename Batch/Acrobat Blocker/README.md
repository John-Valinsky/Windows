# Adobe Firewall Blocker (Windows)

A small C++ utility that automatically creates Windows Defender Firewall rules to block Adobe Acrobat executables from accessing the network — both inbound and outbound.

This is useful if you want to:

* Prevent background network traffic

* Block update checks, telemetry, or license validation calls

* Keep Adobe software fully offline

* Windows only — uses Windows Firewall COM APIs.


# What It Does

* Prompts you for your Adobe installation directory.

* Creates inbound + outbound firewall rules.

* Blocks the following executables:

	* Acrobat.exe

	* AcroCEF.exe

	* AdobeCollabSync.exe

	* AcroServicesUpdater.exe

* Uses the official Windows Firewall COM interfaces (INetFwPolicy2, INetFwRule).


# All rules:

* Block all ports.

* Block all protocols.

* Apply to all local & remote addresses.


# How It Works

* Initializes COM (CoInitializeEx).

* Accesses Windows Firewall policy via INetFwPolicy2.

* Creates firewall rules using INetFwRule.

* Adds BLOCK rules for both IN and OUT directions per executable.


# Requirements

* Windows 10 / 11

* Administrator privileges (required to modify firewall rules)

* Visual Studio (MSVC)

* Windows SDK


# Usage

* Run the executable as Administrator.

* When prompted, enter the Adobe install directory.

* The tool will create firewall rules automatically.


# Firewall Rule Naming

Rules are created with clear names for easy removal:

* BLOCK IN - Acrobat.exe

* BLOCK OUT - Acrobat.exe

* You can remove or disable them anytime via:
```bash
Windows Defender Firewall → Advanced Settings
```


# Important Notes

* Must be run as Administrator.

* Blocking these executables may:
	
	* Disable updates
	
	* Break cloud features

	* Affect licensing behavior

* This project does not bypass activation.

* You are responsible for how you use it.


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