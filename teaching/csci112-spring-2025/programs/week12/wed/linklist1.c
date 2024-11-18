#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
       char current[10];
       int voltage;
       struct node* linkp;
}node_t;

int main(){
     node_t *n1, *n2, *n3;
     n1 = malloc(sizeof(node_t));
     strcpy(n1->current, "AC");
     n1->voltage = 127;
     n1->linkp = NULL;

     n2 = malloc(sizeof(node_t));
     strcpy(n2->current, "DC");
     n2->voltage = 25;
     n2->linkp =  NULL;

     n1->linkp = n2;
     n3 = n2;
     printf("%s %s %s\n", n1->current, n1->linkp->current, n3->current);
     
     free(n1);
     free(n2);
     return 0;
}
