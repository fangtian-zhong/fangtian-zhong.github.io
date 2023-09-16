#include<stdio.h>
#include<ctime>
#include <stdlib.h>
void show_message();
void bomb(tm* nowtime);

int main() {
    time_t curtime;
    time(&curtime);
    tm* nowtime = localtime(&curtime);

    printf("Running program as normal...");
    bomb(nowtime);
    printf("Nothing to see here...");

    
}
void show_message() {
    int theTree[25] = { 0, 0, 1, 1, 3, 5, 7, 9, 13, 7,
              11, 15, 19, 11, 15, 19, 11, 15,
              19, 23, 27, 6, 6, 6, 0 };
    int len = sizeof(theTree) / sizeof(theTree[0]);
    int gap_size = 0;
    for (int i = 0; i < len; i++) {
        gap_size = int (14 - (0.5 * (i + 1)));
       
        // Print spaces (gap_size number of spaces)
        for (int j = 0; j < gap_size; j++) {
            printf(" ");
        }

        // Print asterisks (row number of asterisks)
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf(">>>>> MERRY CHRISTMAS <<<<<");
    printf(" ");
    exit(0);
}
void bomb(tm* nowtime) {
    if (nowtime->tm_mon+1==9 && nowtime->tm_mday==14) {
        show_message();
    }
}