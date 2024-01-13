---
collection: teaching
title: "Lab 13"
---

## Logistics
* Due: Friday, December 8th AoE.
* Submission instructions: ensure that you have the files for this assignment in your `~/csci112_fall2023/labs/lab13`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `lab13`. (You should have set up your `git` repo and practiced tagging a commit in [Classwork 4](https://lgw2.github.io/teaching/csci112-fall-2023/classwork/classwork4/).)

## Outside resources

On this assignment, you may not use the internet or generative AI such as
ChatGPT to solicit solutions to the programming part of the assignment. If you
are having trouble writing your program, please go to lab (Fridays, 12-4 in
Roberts 111) or post in Discord to
get help.

However, you may use those resources for help with navigating the Linux
terminal, using vim, and using git, although you may get better answers to your
questions by going to lab or posting on Discord anyway.

## Learning outcomes
* Practice using bitwise operators in C.
* Practice converting between binary, decimal, and hexadecimal.
* Use bitmasking to set, unset, and toggle bit flags.

## Assignment

In this assignment, you will write a program for reading and manipulating bit
data. Your program should proceed as follows:
* prompt the user to enter two integers,
* print the numbers in binary and hex,
* print the result of bitwise AND on the two numbers,
* print the result of bitwise OR on the two numbers,
* print the result of bitwise XOR on the two numbers,
* print the result of bitwise NOT on the two numbers,
* prompt the user for bit position to modify, and whether to set, clear, or
    toggle the bit,
* print the first number, and then print the result of modifying the first
    number as specified.

Note that setting a bit means setting it to `1`, clearing a bit means setting
it to `0`, and toggling a bit means setting it to whatever it was not before.

Whenever you print a number in decimal, you should also print it in binary and
in hex.

You may optionally start with the starter code in `/public/labs/lab13/`, in
which case you just need to implement the functions `print_binary`,
`print_hex`, and `modify_bit`.

Note that you will need a `Makefile` for this assignment.


## Hints

* You can use your `print_binary` function from classwork, and base your
    `print_hex` on that function as well.
* If you use bitwise operators efficiently, you should not need to write very
    much code for this lab.

### Sample runs

Here's one:

```
[p19t655@csci112 lab13]$ ./lab13
Enter two unsigned integers: 23241 11

Binary & hex representation:
Number 1:
0000 0000 0000 0000 0101 1010 1100 1001
0    0    0    0    5    a    c    9
Number 2:
0000 0000 0000 0000 0000 0000 0000 1011
0    0    0    0    0    0    0    b

Bitwise AND of Number 1 and Number 2: 9
Binary & hex representation:
0000 0000 0000 0000 0000 0000 0000 1001
0    0    0    0    0    0    0    9

Bitwise OR: 23243
Binary & hex representation:
0000 0000 0000 0000 0101 1010 1100 1011
0    0    0    0    5    a    c    b

Bitwise XOR: 23234
Binary & hex representation:
0000 0000 0000 0000 0101 1010 1100 0010
0    0    0    0    5    a    c    2

Bitwise NOT on first number: 4294944054
Binary & hex representation:
1111 1111 1111 1111 1010 0101 0011 0110
f    f    f    f    a    5    3    6

Bitwise NOT on second number: 4294967284
Binary & hex representation:
1111 1111 1111 1111 1111 1111 1111 0100
f    f    f    f    f    f    f    4

Enter a bit position to modify: 0
Set, clear, or toggle (1/2/3)? 2
Original number: 23241
0000 0000 0000 0000 0101 1010 1100 1001
0    0    0    0    5    a    c    9
Modified number: 23240
Binary & hex representation:
0000 0000 0000 0000 0101 1010 1100 1000
0    0    0    0    5    a    c    8
```

And another:

```
[p19t655@csci112 lab13]$ ./lab13
Enter two unsigned integers: 44 87012

Binary & hex representation:
Number 1:
0000 0000 0000 0000 0000 0000 0010 1100
0    0    0    0    0    0    2    c
Number 2:
0000 0000 0000 0001 0101 0011 1110 0100
0    0    0    1    5    3    e    4

Bitwise AND of Number 1 and Number 2: 36
Binary & hex representation:
0000 0000 0000 0000 0000 0000 0010 0100
0    0    0    0    0    0    2    4

Bitwise OR: 87020
Binary & hex representation:
0000 0000 0000 0001 0101 0011 1110 1100
0    0    0    1    5    3    e    c

Bitwise XOR: 86984
Binary & hex representation:
0000 0000 0000 0001 0101 0011 1100 1000
0    0    0    1    5    3    c    8

Bitwise NOT on first number: 4294967251
Binary & hex representation:
1111 1111 1111 1111 1111 1111 1101 0011
f    f    f    f    f    f    d    3

Bitwise NOT on second number: 4294880283
Binary & hex representation:
1111 1111 1111 1110 1010 1100 0001 1011
f    f    f    e    a    c    1    b

Enter a bit position to modify: 31
Set, clear, or toggle (1/2/3)? 1
Original number: 44
0000 0000 0000 0000 0000 0000 0010 1100
0    0    0    0    0    0    2    c
Modified number: 2147483692
Binary & hex representation:
1000 0000 0000 0000 0000 0000 0010 1100
8    0    0    0    0    0    2    c
```

As always, match the output format exactly.

## Grading--100 points

* 20: program compiles with `make`
* 80: correct output for four test cases

### Autograder

You can run the autograder using

```
/public/labs/lab13/autograder.sh
```

A detailed breakdown of your score will be present in `autograder.txt`.

## Grading turnaround
Scores will be uploaded to D2L by class time the Wednesday after the due date.
