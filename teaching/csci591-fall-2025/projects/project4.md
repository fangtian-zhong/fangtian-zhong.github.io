---
collection: teaching
title: "Project 4"
---

## Logistics
* Due: Thursday, November 6th AoE.
* Submission instructions: ensure that you have the source code you want us to grade in a file called `program1.c, program2.c, program3.c` in your submission.

## Outside resources

On this assignment, you can use the internet or generative AI such as ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to my office hours or post in Slack to get help.



## Learning outcomes


## Assignment

* 64-bit executable required. (If you submit a 32-bit executable you will receive 85%.)

* Implement program1.c to print the string ("hello program1".) and compile it to produce program1.exe.
      
* Create program3.c which encrypts program1.exe and appends the encrypted payload to the end of program2.exe, which is a non-executable (section attributes) data section. Compile program3.c to produce program3.exe.

* When program3.exe runs by program3.exe program1.exe, program2.exe, it should produce retrofiting.exe, where retrofiting.exe contains the encrypted program1.exe in its final section.

* program2.c
  
    1. Print the string "hello program2".
    2. Read the encrypted program1.exe payload stored in the last section of itself.
    3. Decrypt the payload to recover the original program1.exe.
    4. Create a suspended process using the CreateProcess API; the new process will be retrofiting.exe (after program1.exe is attached to program2.exe, program2.exe becomes retrofiting.exe).
    5. Obtain the context of retrofiting.exe (including its image base and original entry point, OEP).
    6. Unmap the existing image (e.g., NtUnmapViewOfSection) to free space in the target process for the decrypted program1.exe.
    7. Allocate memory (VirtualAllocEx) in the target process at the desired location (the ImageBase of program1.exe) with the SizeOfImage from program1.exe.
    8. If allocation at the preferred image base succeeds, expand the sections of program1.exe according to SectionAlignment and write them into the target process with WriteProcessMemory.
    9. If allocation at the preferred base fails but a relocation table exists, allocate memory at any available address, copy the image there, and apply/patch relocations accordingly.
    10. Modify the thread context of the suspended main thread: set the thread’s image base and entry point to the ImageBase and OEP of program1.exe.
    11. Set the updated thread context and resume the main thread.
    12. The replacement is complete and successful.

* When the modified program2.exe (retrofiting.exe) runs, it first prints "hello program2" and then prints "hello program1".

* Applying stealth techniques (inspired by rootkits) to Project 3 will earn an extra 20 points. This will be verified by the task manager; if the running program2.exe is not visible in the task manager, the test is considered successful.

* Applying spying techniques (inspired by spyware) to Project 3 will earn an extra 20 points. This will be tested by whether keystrokes are displayed as users press them—one displayed keystroke per keypress indicates success.

* Developing additional techniques derived from other malware categories will earn 20 extra points per technique.

* Only source codes are required to submit. To test your project, first, I will compile your program1.c and get program1.exe. second, I will compile your program3.c and obtain the program3.exe. Third, I will compile your program2.c and get program2.exe. Fourth, I will use program3.exe to encrypt program1.exe and attach program1.exe to program2.exe by running the command program3.exe program1.exe program2.exe, which outputs a program named retrofiting.exe. Finally, I will run retrofiting.exe and get the output "hello program2" first and then "hello program1". 
### Example output


## Grading--100 points

* 10: source file compiles without warnings
* 10: program1.c compiles to program1.exe and prints hello program1 when run.
* 10: format "program3.exe program2.exe program1.exe" is implemented correctly.
* 10: program3.c compiles to program3.exe and appends a payload (an encrypted blob) to program2.exe, producing retrofiting.exe.
* 20: program2.c compiles to program2.exe (with 1-6 being implemented correctly); 
* 40: retrofiting.exe prints hello program2 and then hello program1  
## Grading turnaround
Scores will be uploaded to Canvas by next Tuesday.
