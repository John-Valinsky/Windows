<!-- PROJECT SHIELDS -->
![Repo Size](https://img.shields.io/github/repo-size/John-Valinsky/Windows)
![Last Commit](https://img.shields.io/github/last-commit/John-Valinsky/Windows)
![Open Issues](https://img.shields.io/github/issues/John-Valinsky/Windows)
![Stars](https://img.shields.io/github/stars/John-Valinsky/Windows)

# Hash Check (SHA-256 File Verification Tool)

A simple and lightweight Windows desktop application built with WPF (.NET) that allows users to compute and verify the SHA-256 hash of any file.

This tool is useful for verifying file integrity, checking downloads, and ensuring files have not been modified or tampered with.


# Overview

Hash Matcher allows you to:

* Select any file from your system.

* Generate its SHA-256 hash.

* Compare it with a user-provided hash.

* Instantly check whether the hashes match.


It is especially helpful when verifying:

* Software downloads.

* Security tools.

* Executable (.exe) files.

* Sensitive files where integrity matters.


# Why SHA-256?

SHA-256 (Secure Hash Algorithm 256-bit) is a cryptographic hash function that:

* Produces a fixed 64-character hexadecimal string.

* Is widely used in cybersecurity.

* Is resistant to collisions and tampering.

* Is trusted for integrity verification.

If even one byte of a file changes, the SHA-256 hash changes completely.


# Features

* Browse and select any file.

* Compute SHA-256 hash instantly.

* Compare computed hash with user input.

* Case-insensitive hash comparison.

* Clear and simple result display.

* Lightweight and fast.

* Built using modern C# null-safety.


# User Interface Flow

## Browse File

* Select any file from your system.

* The selected file path is displayed.

## Show Hash

* Computes and displays the SHA-256 hash of the selected file.

## Check

* Enter a hash value.

* Compares it with the computed file hash.

* Displays:

	* HASH MATCHED

	* HASH NOT MATCHED


# Built With

* C#

* WPF (Windows Presentation Foundation)

* .NET

* System.Security.Cryptography (SHA256)


# Important Notes

* This tool computes SHA-256 only.

* Hash comparison is case-insensitive.

* The entire file is read securely before generating the hash.

* Designed for Windows environments.