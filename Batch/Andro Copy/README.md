# Android File Organizer (Windows Batch Script)

A simple Windows batch script that helps you organize Android backup files by type while preserving the original folder structure. Perfect for cleaning up messy phone backups copied to your PC.


# Features

* Prompts for source and destination folders.

* Organizes files into categories:

	* Images

	* Videos

	* Documents

	* Music

* Preserves original subfolder structure.

* Fast, lightweight, no dependencies.

* Runs on any modern Windows system.


# File Types Supported

Images 
```bash
.jpg .jpeg .png .gif .bmp .webp .heic
```

Videos
```bash
.mp4 .mkv .avi .mov .wmv .3gp .flv
```

Documents
```bash
.pdf .doc .docx .xls .xlsx .ppt .pptx .txt
```

Music
```bash
.mp3 .wav .aac .flac .ogg .m4a
```


# How It Works

1 You run the script.

2 It asks for:

	* SOURCE folder (e.g. your Android backup)

	* DESTINATION folder (where organized files go)

3 Files are copied into categorized folders.


# Requirements

* Windows (Command Prompt).

* Read access to source folder.

* Write access to destination folder.


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