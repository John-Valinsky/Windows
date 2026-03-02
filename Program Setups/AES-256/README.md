<!-- PROJECT SHIELDS -->
![Repo Size](https://img.shields.io/github/repo-size/John-Valinsky/Windows)
![Last Commit](https://img.shields.io/github/last-commit/John-Valinsky/Windows)
![Open Issues](https://img.shields.io/github/issues/John-Valinsky/Windows)
![Stars](https://img.shields.io/github/stars/John-Valinsky/Windows)


# AES-256 — Secure Text Encryption Tool

AES-256 is a simple desktop application built with WPF (.NET) that allows users to securely encrypt and decrypt text using modern, industry-grade cryptography.

It’s designed to be easy to use, cryptographically sound, and safe by default.


# Features

* AES-256 Encryption (AES-GCM mode) - Provides confidentiality and integrity using authenticated encryption.

* Password-Based Key Derivation (PBKDF2) - Secure keys are derived from user passwords using SHA-256 and 100,000 iterations.

* Random Salt & IV Generation - Each encryption operation uses fresh randomness to prevent replay and pattern attacks.

* Show / Hide Password Toggle - Lets users verify their password input without compromising usability.

* Self-Contained Encrypted Output - The encrypted text includes everything required for decryption (salt, IV, tag, ciphertext) encoded safely in Base64.

* Clean WPF UI - Minimal, distraction-free interface focused on security and clarity.


# How It Works (High Level)

* User enters text and a password.

* A random salt and initialization vector (IV) are generated.

* A 256-bit encryption key is derived from the password.

* Text is encrypted using AES-GCM.

* The result is packaged and displayed as a Base64 string.

* Decryption reverses the process using the same password.

If the password is wrong or the data is altered, decryption safely fails.


# Security Design Choices

* AES-GCM for authenticated encryption.

* PBKDF2 with SHA-256 for resistance against brute-force attacks.

* 100,000 iterations to slow password guessing.

* Constant-time cryptographic primitives from the .NET framework.

* No password storage — passwords exist only in memory.


# Requirements

* Windows OS

* .NET (with support for AES-GCM)

* No external dependencies