#include<stdio.h>

int main(){
    FILE *in;
    FILE *out;

    in = fopen("input.txt", "r");
    if(!in){
       printf("failed to open input.txt!\n");
       fclose(in);
       return 1;
    }
    out =fopen("output.txt", "w");
    if(!out){
        printf("failed to open output.txt!\n");
	fclose(out);
	return 1;
    }
    char name[50];
    int age;
    while(fscanf(in, "%s %d",name, &age)!=EOF){
        printf("name=%s, age=%d\n", name, age);
	fprintf(out, "name=%s age=%d", name, age);
    }

    fclose(in);
    fclose(out);
    return 0;
}
