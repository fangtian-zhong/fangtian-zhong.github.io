#include<stdio.h>
#include<string.h>

void selectionSort(char *flowerptr[], int n){
       for(int i=0; i < n-1;i++){
          int minIndex = i;
          for(int j = i+1; j < n; j++ ){
	      if(strcmp(flowerptr[j], flowerptr[minIndex]) < 0){
	            minIndex = j;
	      }
	  }
	  if(minIndex!=i){
	     char* temp;
	     temp = flowerptr[minIndex];
	     flowerptr[minIndex] = flowerptr[i];
	     flowerptr[i] = temp;
	  }
       }
}

int main(){
char flower[][10] = {"tulip", "marigold", "petunia", "rose", "daisy"};
char* flowerptr[5];
for(int i=0; i< sizeof(flower)/sizeof(flower[0]);i++){
       flowerptr[i] = flower[i];
}

for(int i=0; i< sizeof(flower)/sizeof(flower[0]); i++){
      printf("%s ", flower[i]);
}

printf("\n");

selectionSort(flowerptr, 5);

for(int i=0; i<5; i++){
   printf("%s ", flowerptr[i]);
}

printf("\n");
return 0;

}
