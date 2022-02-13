# UIO_Spring2022

Using Ubuntu through WSL:
  - Search for Ubuntu 20.04 LTS and run
    - This opens a linux terminal in the Ubuntu filesystem
  - Navigate to working directory (UIO_Spring2022) and execute $ code .
    - This opens Visual Studio Code withing the folder pointed to by '.'

Compiling on IFI Machine:
  - Transfer file to IFI machine with the following command:
    - $ scp [filename] username@login.ifi.uio.no:~/path/to/file.ext
  - Login to the IFI machine with the following command:
    - $ ssh username@login.ifi.uio.no
  - Navigate to ~/path/to/ and compile the program with $ gcc file.ext -o [name]
  - Run program with $ ./name
