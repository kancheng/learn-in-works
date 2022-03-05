# COBOL

## Details

COBOL 考古.

## Install

### Mac

Step 1: Install Homebrew if it is not installed in your system. Enter system password if required.

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install.sh)"
```

Step 2: Install the GNU-COBOL using the below brew command:

```
brew install gnu-cobol
```

Step 3: Check if it is installed correctly using the below command:

```
cobc -v
```

## Hello World!

```
cobc -x -o hello_world hello_world.cbl
./hello_world
```

1. hello_world.cbl

```
000100 IDENTIFICATION DIVISION.
000200 PROGRAM-ID.     HELLOWORLD.
000300
000400*
000500 ENVIRONMENT DIVISION.
000600 CONFIGURATION SECTION.
000700 SOURCE-COMPUTER. RM-COBOL.
000800 OBJECT-COMPUTER. RM-COBOL.
000900
001000 DATA DIVISION.
001100 FILE SECTION.
001200
100000 PROCEDURE DIVISION.
100100
100200 MAIN-LOGIC SECTION.
100300 BEGIN.
100400     DISPLAY " " LINE 1 POSITION 1 ERASE EOS.
100500     DISPLAY "Hello world!" LINE 15 POSITION 10.
100600     STOP RUN.
100700 MAIN-LOGIC-EXIT.
100800     EXIT.
```

2. hello.cbl

```
000100 IDENTIFICATION DIVISION.
000200 PROGRAM-ID.     HELLOWORLD.
000300
000400*
000500 PROCEDURE DIVISION.
000600 DISPLAY "SIMPLE HELLO WORLD".
000700 STOP RUN.
```

## GitHub

1. https://github.com/openmainframeproject/cobol-programming-course

## Reference

1. https://www.tutorialbrain.com/mainframe/cobol_hello_world_program/

2. https://www.thegeekstuff.com/2010/02/cobol-hello-world-example-how-to-write-compile-and-execute-cobol-program-on-linux-os/

3. https://www.geeksforgeeks.org/how-to-install-cobol-on-macos/

4. https://www.thegeekstuff.com/2010/02/cobol-hello-world-example-how-to-write-compile-and-execute-cobol-program-on-linux-os/

5. https://blog.xuite.net/emma_nicolas/tech/47212777-COBOL%E7%A8%8B%E5%BC%8F%E8%AA%9E%E8%A8%80%E6%A6%82%E8%AB%96

6. https://www.microfocus.com/documentation/visual-cobol/VC232/EclWin/GUID-316FEF7E-528C-43DA-AD66-A4FE55F3CB4C.html

7. http://groups.umd.umich.edu/cis/course.des/cis400/cobol/hworld.html

