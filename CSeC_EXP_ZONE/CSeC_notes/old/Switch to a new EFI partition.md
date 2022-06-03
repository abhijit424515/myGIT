[[Scripts]]

---

# Switch to a new EFI partition

- First, fill up the empty space with blank temporary partitions, leaving just enough space for the EFI partition
- Run cmd as admin, then type ```diskpart```
- Select the correct disk using ```sel disk 0```, where I selected Disk 0
- Type ```list part``` to list the partitions available
- Type ```create partition efi``` to make an EFI partition in the leftover space   
- Type ```format quick fs = fat32``` to format it as FAT32 file system
- Type ```assign letter = O``` to assign letter to the partition (I used O in my case)
- Type ```exit``` to exit the diskpart environment
- Type ```bcdboot C:\windows /s O: /f UEFI``` to create boot files on that partition (I used O in my case)
- Type ```exit``` and restart your PC
- Install [MiniTool Partition Wizard (free edition)](https://www.partitionwizard.com/download.html) to delete old EFI partition
- Open it, and then delete the old EFI partition using it
- Done