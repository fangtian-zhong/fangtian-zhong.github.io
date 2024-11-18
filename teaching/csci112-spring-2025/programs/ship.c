#include<stdio.h>

int main(){
    printf("Please tell me the serial number");
    char serial_num;
    scanf("%c", &serial_num);

    switch(serial_num){
	    case 'b':
            case 'B':
		    printf("Battleship\n");
		    
	    case 'c':
	    case 'C':
		    printf("Crusier\n");
		    break;
            case 'd':
	    case 'D':
		    printf("Destoryer\n");
		    break;
            case 'f':
            case 'F':
		    printf("Frigate\n");
                    break;
            default:
		    printf("Unknown\n");
       
    }
    return 0;
}
