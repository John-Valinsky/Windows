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