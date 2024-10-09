#include <stdio.h>

int main() {
    char buffer[50];  // Buffer to store the input
    FILE* pin=fopen("example.txt", "r");
    if(!pin){
	printf("fail to open the file!\n");
        return 1;
    }
    printf("Enter a line of text: ");
    while(fgets(buffer, sizeof(buffer), pin) != NULL) {
        printf("You entered: %s", buffer);
    } 
    
    return 0;
}

