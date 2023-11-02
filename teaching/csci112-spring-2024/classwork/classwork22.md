---
collection: teaching
title: "Classwork 22"
---

## Logistics
* Due: Wednesday, April 26th AoE.
* Submission instructions: make sure that the required file (`find_and_delete.c`) is in your
	`/classwork/week14/wed/` directory.
* Note: this assignment is ungraded.

## Learning outcomes
* Practice writing a linked list function

## Assignment

If on campus and connected to a MSU network:
* Log in to the server.
* From your home directory, navigate to `classwork/week14/wed/`, creating directories `week14`
and `wed` if necessary.
* Copy the `find_and_delete.c` file from `/public/classwork/week14/wed` and fill in
	`delete_digit` so that it finds the node with the given integer value and
    deletes it from the list. You are *not* required to free the memory. (You
    will get practice with this on Lab 7.) However, do be sure that you deal
    with the case when the node to delete is the first one!

If off campus:
* Copy the code below. Using a C compiler of your choice (if you don't have
	one, use https://www.jdoodle.com/c-online-compiler/), fill in the
	`create_new_digit` function as described above so that the program prints
```
List is:
1->4->9->16->25->36->49->64->81->
List is:
4->9->16->25->36->49->81->
```
* In a DM to Lucy on Discord, copy your code. Surround your code with three
    backticks (\` \` \`, found under the tilde (~) on your keyboard) on the first line and last line so that Discord doesn't
    think asterisks are meant to italicize. Or attach it as a file.

## Autograder

You can run the autograder yourself by running
```
/public/classwork/week14/wed/autograder.sh
```
The `autograder.txt` file will be created or
replaced. You may get a few lines of output about not being able to remove
files, etc. This is okay.

For those who DM their code, if your program has the output
```
List is:
1->4->9->16->25->36->49->64->81->
List is:
4->9->16->25->36->49->81->
```
you will get full credit.

## Code to copy

```
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct digit {
    int d;
    struct digit* next;
} digit;

void print_list(digit* head) {
    digit* temp = head;

    while (temp != NULL) {
        printf("%d->", temp->d);
        temp = temp->next;
    }
    printf("\n");
}

digit* create_new_digit(int d) {
    digit* new = malloc(sizeof(digit));
    new->d = d;
    new->next = NULL;
    return new;
}

void insert_digit_at_end(digit** head, digit* new) {
    // find end
    digit* current = *head;
    if (*head == NULL) {
        *head = new;
    } else {
        while (current->next != NULL) {
            current = current->next;
        }
        // found end
        current->next = new;
    }
}

void delete_last_digit(digit** head) {
    digit* current = *head;
    digit* to_free;
    if (current == NULL) {
        // no nodes
        return;
    } else if (current->next == NULL) {
        //
        *head = NULL;
        free(current);
    } else {
        while (current->next->next != NULL) {
            current = current->next;
        }
        to_free = current->next;
        current->next = NULL;
        free(to_free);
    }
}

void delete_digit(digit** head, int d) {
    // TODO
}


int main(void) {
    digit* head;

    for (int i = 1; i < 10; i++) {
        insert_digit_at_end(&head, create_new_digit(i*i));
    }
    printf("List is:\n");
    print_list(head);
    delete_digit(&head, 64);
    delete_digit(&head, 1);
    printf("List is:\n");
    print_list(head);

}
```
