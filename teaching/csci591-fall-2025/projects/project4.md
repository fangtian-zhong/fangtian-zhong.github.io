---
collection: teaching
title: "Project 4"
---

## Logistics
* Due: Tuesday, November 6th AoE.
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `project4.c, program1.c, program2.c, program3.c` in your submission.

## Outside resources

On this assignment, you can use the internet or generative AI such as ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to my office hours or post in Slack to get help.



## Learning outcomes


## Assignment

* program2.c — 64-bit executable required (if you submit a 32-bit executable you will receive 85%).
  
    1. print a string "hello program2".
    2. Read encrypted program1 at the last section of retrofiting.exe.
    3. Decrypt it to get the original program1.exe.
    4. Create the process in suspended form by using API "CreateProcess", the process to be created is retrofiting.exe
    5. Get the context of the retrofiting.exe (ImageBase and OEP).
    6. Uninstaller (NtUnmapViewOfSection).
    7. Allocate space (by using API "VirtualAllocEx") at the specified location which is "ImageBase" of program1.exe, and the size is the SizeOfImage of program1.exe.
    8. If the application space is successful, stretch the program1.exe and copy it to the space (by using WriteProcessMemory).
    9. If the application space fails, but there is a relocation table, apply for space at any position, then stretch, copy, and repair the relocation table of the program1.exe.
    10. Modify the Context of the program. Change the ImageBase of the Context of the program2.exe to the ImageBase of program1.exe and change the OEP of the Context of the program2.exe to the OEP of program1.exe.
    11. Set the Context and restore the main thread
    12. The replacement is successful

* The source code of program1.exe is to print a string "hello program1".
    1. You have to develop program1.c that print the string.
    2. Compile program1.c to produce program1.exe.

* We have to develop a program3.c that first encrypt the virus (in our case, it is program1.exe) by XORing it with 0x40 and then attached the encrypted virus to the end of program2.exe. After it is compiled, producing program3.exe.

* After running program3.exe, you will get the retrofiting.exe that has the encrypted program1.exe at its last section.

* If we run the new program2.exe, it first prints "hello program2" and then prints "hello program1".

* If you apply the techniques from rootkits to project3, you will receive extra 2 points. It will be tested by task manager. If the running program2.exe is hidden from task manager, it means successful.

* If you apply the techniques from spyware to project3, you will receive extra 2 points. It will be tested by displaying the keystrokes when people press them. If the running program2.exe is showing the keystroke after people press it, one by each press, it means successful.

* If you develop additional techniques from other types of malware, you will receive extra 2 points each. 

* Only source codes and a explanable file are required to submit. To test your project, first, I will compile your program1.c and get program1.exe. second, I will compile your program3.c and obtain the program3.exe. Third, I will compile your program2.c and get program2.exe. Fourth, I will use program3.exe to encrypt program1.exe and attach it to program2.exe by running the command project4.exe program1.exe program2.exe, which outputs a program named retrofiting.exe. Finally, I will run it and get the output "hello program2" first and then "hello program1". 
### Example output


## Grading--100 points

* 10: source file compiles without warnings
* 10: use the command project4.exe program1.exe program2.exe 
* 10: program1.exe prints out `hello world` correctly
* 20: program2.exe prints out the file header, optional header, and last section header correctly before attaching
* 10: project3.exe successfully attaches program1.exe to program2.exe and prints `attaching completed!`. 
* 10: project3.exe updates all required fields in headers.
* 30: program2.exe prints its updated file header, optional header, and last section header correctly. Don’t use existing API functions, and use the structures you defined, otherwise, 10 points off from your total score.

## Grading turnaround
Scores will be uploaded to Canvas by next Tuesday.
