#include <stdio.h>

int main(int argc, char* argv[])
{
    if (argc < 2) {
        printf("Usage: %s filename.exe", argv[0]);
        return 1;
    }
    
    return 0;
}