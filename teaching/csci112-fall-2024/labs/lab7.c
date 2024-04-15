#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab7.h"

int main(void) {

    int n;
    char name[20];
    Exhibit* start = NULL;
    printf("How many exhibits would you like to add? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter exhibit name > ");
        scanf("%s", name);
        insert_exhibit_at_front(&start, create_new_exhibit(name));
    }
    printf("\nCurrent list:\n");
    printExhibits(start);
    printf("\n");
    printf("How many exhibits would you like to delete? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter exhibit name > ");
        scanf("%s", name);
        delete_exhibit(&start, name);
    }
    printf("\nCurrent list:\n");
    printExhibits(start);
    printf("\n");
    printf("How many exhibits would you like to add? > ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter exhibit name > ");
        scanf("%s", name);
        insert_exhibit_at_front(&start, create_new_exhibit(name));
    }
    printf("\nCurrent list:\n");
    printExhibits(start);

    // free the memory
    delete_all(&start);
    printf("after freeing:\n");
    printExhibits(start);
    
}
