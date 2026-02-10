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

* Recursively searches the provided directory for target executables.

* For each executable found

	* Creates an Outbound BLOCK rule

	* Creates an Inbound BLOCK rule

* Rules apply to Any profile (Domain, Private, Public).

* cmd.exe (batch scripting).

* PowerShell (firewall rule creation).


# Requirements

* Windows 10 / 11

* Administrator privileges.

* PowerShell 5.1+ (included by default on modern Windows).


# Usage

* Right-click the .bat file.

* Run as Administrator.

* Enter the full path to the Adobe installation folder example
```bash
C:\Program Files\Adobe\Acrobat DC
```

* The script scans and applies firewall rules automatically.

* Example output
```bash
Found: C:\Program Files\Adobe\Acrobat DC\Acrobat\Acrobat.exe
Found: C:\Program Files\Adobe\Acrobat DC\Acrobat\AcroCEF.exe

Firewall rules applied successfully.
```


# Firewall Rule Naming

Each executable gets clearly labeled rules:

* BLOCK OUT Acrobat.exe

* BLOCK IN Acrobat.exe

* Repeated per executable


# Rules can be viewed or removed from

* Windows Defender Firewall

* Advanced Settings

* Outbound / Inbound Rules.


# Important Notes

* Must be run as Administrator

* Blocking these executables may

	* Disable updates.

	* Break online services.

	* Affect licensing behavior.

* This script does not crack or bypass activation.

