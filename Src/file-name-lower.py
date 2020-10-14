import os
# Get current working directory
CWD = os.getcwd()
# Get file list
FileList = os.listdir(CWD)
# Lower file name
for OldName in FileList:
    OldName = CWD + "\\" + OldName
    os.rename(OldName, OldName.lower())
