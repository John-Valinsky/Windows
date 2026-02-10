# Adobe Firewall Blocker (Batch + PowerShell)

A lightweight Windows batch script that scans an Adobe installation directory and automatically creates Windows Defender Firewall rules to block Adobe executables from accessing the network.

No compilation. No Visual Studio. Just run it as Administrator and you’re done.


# What This Script Does

* Prompts you for the full Adobe install directory.

* Recursively scans for common Adobe executables.

* Automatically creates Inbound + Outbound firewall rules.

* Uses PowerShell’s New-NetFirewallRule.

* Blocks network access across all firewall profiles.


# Targeted executables

* Acrobat.exe

* AcroCEF.exe

* AdobeCollabSync.exe

* AcroServicesUpdater.exe


# How It Works

* Verifies the script is running as Administrator.

