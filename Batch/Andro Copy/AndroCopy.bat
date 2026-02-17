@echo off
:: ===============================================
:: Script Name : Android File Organizer
:: Author      : John Valinsky
:: Created On  : 14-Jan-2026
:: Description : 
::   Copies files from source to destination,
::   organizes them by type, preserves folder
::   structure, and shows progress.
:: ===============================================

@echo off
setlocal EnableDelayedExpansion

:: Ask for source folder
set /p "SOURCE=Enter SOURCE folder path (e.g. D:\Android_Backup): "

if not exist "%SOURCE%" (
    echo Source folder not found!
    pause
    exit /b
)

:: Ask for destination folder
set /p "DEST=Enter DESTINATION folder path (e.g. C:\Organized_Backup): "

if not exist "%DEST%" mkdir "%DEST%"

echo.
echo Organizing files... Please wait.
echo.

:: ===== IMAGES =====
for /r "%SOURCE%" %%F in (*.jpg *.jpeg *.png *.gif *.bmp *.webp *.heic) do (
    set "FULL=%%~dpF"
    set "REL=!FULL:%SOURCE%=!"
    mkdir "%DEST%\Images!REL!" 2>nul
    copy "%%F" "%DEST%\Images!REL!" >nul
)

:: ===== VIDEOS =====
for /r "%SOURCE%" %%F in (*.mp4 *.mkv *.avi *.mov *.wmv *.3gp *.flv) do (
    set "FULL=%%~dpF"
    set "REL=!FULL:%SOURCE%=!"
    mkdir "%DEST%\Videos!REL!" 2>nul
    copy "%%F" "%DEST%\Videos!REL!" >nul
)

:: ===== DOCUMENTS =====
for /r "%SOURCE%" %%F in (*.pdf *.doc *.docx *.xls *.xlsx *.ppt *.pptx *.txt) do (
    set "FULL=%%~dpF"
    set "REL=!FULL:%SOURCE%=!"
    mkdir "%DEST%\Documents!REL!" 2>nul
    copy "%%F" "%DEST%\Documents!REL!" >nul
)

:: ===== MUSIC (Optional) =====
for /r "%SOURCE%" %%F in (*.mp3 *.wav *.aac *.flac *.ogg *.m4a) do (
    set "FULL=%%~dpF"
    set "REL=!FULL:%SOURCE%=!"
    mkdir "%DEST%\Music!REL!" 2>nul
    copy "%%F" "%DEST%\Music!REL!" >nul
)

echo.
echo =====================================
echo   FILE ORGANIZATION COMPLETED!
echo =====================================
pause
