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