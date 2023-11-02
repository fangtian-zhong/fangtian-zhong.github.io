---
collection: teaching
title: "Program 2"
---

## Logistics
* Due: Monday, May 8th AoE (no late deadline!)
* Submission instructions: ensure that you have the source code you want us to
	grade in a file called `program2.c` in your `~/csci112_spring2023/programs/program2`
	directory, and that the snapshot (commit) of your repository containing the version of that file you want us to grade has been committed and
	tagged as `program2`. See the [git lecture](https://lgw2.github.io/teaching/csci112-spring-2023/lectures/lecture2) and [classwork 4](https://lgw2.github.io/teaching/csci112-spring-2023/classwork/classwork4) for more
	details.
* Note that grading will be done on D2L, so you can see comments and a
	 detailed breakdown of your score there, but you do not need to submit
	anything there.

## Learning outcomes
* Practice using pointers to create a linked list.
* Practice using `malloc` and `free` to dynamically allocate and deallocate
	memory.
* Write a menu-driven program.

## Assignment

As the software developer for the (soon-to-be-announced) Bozeman Zoo, you need
to write a program that keeps track of the exhibits and the animals that live
in them. Luckily, you recall that way back in your student days (or was it just
last week?), you wrote a
linked list of zoo exhibits, so you decide to build on that. However, you will
need a nice menu for your employees to interact with, and you also need to keep
track of the animals that are living in each exhibit.

### Program specification

Note that you can reuse a lot of your code from Lab 7, though you will need to
edit it.

Your program must include the following two structs. You may use the pre-written header file at
`/public/programs/program2/structs.h` if you would like.
1. struct `Exhibit` with data members for the name of the exhibit, the capacity, and a pointer to an `Animal` struct (the start of the list of animals for this exhibit)
and a pointer to the next exhibit.
2. struct `Animal` with data members the name, age, and species of the animal and a pointer to the next
	animal.

Your program must include the following nine functions. You can see their inputs and return types in
`/public/programs/program2/funcs.h`, which you can include in your own program
if you would like.
1. `print_exhibits`, which should print all exhibit information, including
   capacity and the current animal lists for each exhibit.
2. `create_new_exhibit`, which must use `malloc` to allocate space for the new
   exhibit on the heap.
3. `insert_exhibit_at_front`
4. `delete_exhibit`, which must use `free` to free the given exhibit from the
   heap. You may assume that the exhibit exists and that it has no animals.
5. `delete_all`, which must use `free` to free all of the animals and all of
   the exhibits on the heap.
6. `print_animals`, which should print all information for a given animal list.
   (You should probably call this function inside `print_exhibits`.)
7. `create_new_animal`, which must use `malloc` to allocate space for the new animal on the heap.
8. `insert_animal_at_front`, which adds an animal to the front of a given exhibit's animal list,
You may assume that the exhibit exists.
9. `delete_animal`, which must use `free` to free the given animal in the given
   exhibit from the
   heap. You may assume that the exhibit and animal exist.

You may want to include other functions as well, but you are not required to.
For example, in my implementation, I had a function to check whether a given
exhibit has enough capacity, and a function to count the number of animals in
an exhibit.

### Menu details

You should offer the user the following choices:
1. Create a brand new zoo. Ask for the number of exhibits, and then prompt the
   user for the name and capacity of each exhibit. Put all of the exhibits in a linked list. You may assume that this is always the first thing the user chooses, and that they only choose it once.
2. Add an exhibit to the zoo. Ask the user for the name of the exhibit, and
   then add the exhibit at the front of the linked list.
3. Add an animal to an exhibit. Prompt the user for the information about
   each animal and which exhibit it should be added to. If there is capacity in the exhibit, add the animal. If not, print a message saying there is no
   capacity, and don't add the animal.
4. Remove an animal from an exhibit. Ask the user for the exhibit name and the
   animal name. Find the animal in the exhibit's animal linked list and remove
   it. You may assume that the given animal and exhibit exist.
5. Remove an exhibit. You may assume that all animals have been removed from
   the exhibit if this choice is made.
6. Exit the program.

After the user makes a choice, the program should print the current state of
the zoo (i.e., all of the exhibits and the animals they contain), and prompt
the user to make another choice.

After the user chooses to exit, you should call `delete_all` to delete the
whole list of exhibits and animals and free all heap memory.

### Hints
* See the hints from Lab 7.

## Test data

There is a test input file in `/public/programs/program2/test.txt`. It uses the
same inputs as the sample run at the bottom of this page.

## Grading - 100 points
**If your code does not compile, has a runtime error on the sample input,
or uses global variables (variables declared outside of main), you get an
automatic 0.**

*For each of the 9 functions:*
* 5 points: successfully implements the functionality of the function (ignoring
    allocating/deallocating memory)

*For the 5 functions that allocate/deallocate memory:*
* 5 points: memory is correctly allocated/deallocated

*Other:*
* 5 points: menu works correctly
* 5 points: prints all information and in a pleasing manner
* 5 points: uses at least one header file and two `.c` files
* 5 points: provides a Makefile that correctly encodes the dependencies between
    the files and can successfully compile it
* 5 points: source code is in a commit with tag `program2`
* 5 points: source code is in `csci112_spring2023/programs/program2` directory

## Grading turnaround
This program will be graded within one week of its due date.

## Go beyond
* Be able to handle the case when the user enters an exhibit that doesn't exist
    or an animal that doesn't exist when trying to add.
* Be able to handle the case when the user enters an exhibit that doesn't exist
    or an animal that doesn't exist when trying to delete.
* Allow a user to delete an exhibit if it still has animals in it, but make
    sure you have no memory leaks!
* Add menu items to add multiple animals at once and delete multiple animals at
once.
* Add a function to add exhibits in the middle of list (for
    example, after another exhibit with a given name).
* Add a function to add animals in the middle of list (for
    example, after another animal with a given name).
* Allow the user to create new zoo even when a zoo already exists. In this
    case, delete the old zoo before prompting for information about the new
    zoo.

## Starter code

If you do not have access to the server, download the starter code [here](https://lgw2.github.io/teaching/csci112-spring-2023/programs/program2.zip).


## Sample output

You do not need to match the output format.

```
[p19t655@csci112 program2]$ make
gcc -c program2.c -Wall
gcc -c funcs.c -Wall
gcc program2.o funcs.o -o program2
[p19t655@csci112 program2]$ ./program2
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 1
How many exhibits would you like to start with? > 3
Enter exhibit name > Sea
Enter exhibit capacity > 3
Enter exhibit name > Forest
Enter exhibit capacity > 5
Enter exhibit name > Desert
Enter exhibit capacity > 1
  THE ZOO
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  No animals.
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Bob
Enter animal age > 10
Enter animal species > Lion
Enter animal's exhibit > Forest
  THE ZOO
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Sally
Enter animal age > 11
Enter animal species > Lion
Enter animal's exhibit > Forest
  THE ZOO
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 2
Enter exhibit name > Riverside
Enter exhibit capacity > 2
  THE ZOO
  Riverside exhibit (2 animal capacity):
  No animals.
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Harry
Enter animal age > 1
Enter animal species > Otter
Enter animal's exhibit > Riverside
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Felix
Enter animal age > 2
Enter animal species > Otter
Enter animal's exhibit > Riverside
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Felix (Otter, age 2)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Mary
Enter animal age > 12
Enter animal species > Otter
Enter animal's exhibit > Riverside
Exhibit is already at capacity!
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Felix (Otter, age 2)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice:
4
Enter animal name > Felix
Enter exhibit name > Riverside
Found the exhibit! now let's delete the animal
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
  Sea exhibit (3 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 5
Enter exhibit name > Sea
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Mary
Enter animal age > 12
Enter animal species > Otter
Enter animal's exhibit > Riverside
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Sally (Lion, age 11)->Bob (Lion, age 10)->
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 4
Enter animal name > Sally
Enter exhibit name > Forest
Found the exhibit! now let's delete the animal
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  Bob (Lion, age 10)->
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 4
Enter animal name > Bob
Enter exhibit name > Forest
Found the exhibit! now let's delete the animal
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
  Forest exhibit (5 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 5
Enter exhibit name > Forest
  THE ZOO
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 2
Enter exhibit name > Forest
Enter exhibit capacity > 2
  THE ZOO
  Forest exhibit (2 animal capacity):
  No animals.
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Alfie
Enter animal age >
1
Enter animal species > Squirrel
Enter animal's exhibit > Forest
  THE ZOO
  Forest exhibit (2 animal capacity):
  Alfie (Squirrel, age 1)->
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Xander
Enter animal age > 3
Enter animal species > Monkey
Enter animal's exhibit > Forest
  THE ZOO
  Forest exhibit (2 animal capacity):
  Xander (Monkey, age 3)->Alfie (Squirrel, age 1)->
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 3
Enter animal name > Jess
Enter animal age > 3
Enter animal species > Monkey
Enter animal's exhibit > Forest
Exhibit is already at capacity!
  THE ZOO
  Forest exhibit (2 animal capacity):
  Xander (Monkey, age 3)->Alfie (Squirrel, age 1)->
  Riverside exhibit (2 animal capacity):
  Mary (Otter, age 12)->Harry (Otter, age 1)->
  Desert exhibit (1 animal capacity):
  No animals.
Menu
1 - Create new zoo
2 - Add exhibit
3 - Add animal
4 - Remove animal
5 - Remove exhibit
6 - Exit
Enter choice: 6
Emptying the zoo.
  THE ZOO
  The zoo is empty.
```
