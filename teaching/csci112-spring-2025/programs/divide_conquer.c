#include<stdio.h>

void draw_circle(void);
void draw_triangle(void);
void draw_intersec(void);
void draw_base(void);
int main(){
    //draw a circle
    draw_circle();
    //draw a triangle
    draw_triangle();
    //draw intersecting line
    draw_intersec() ;
    
    return 0;   

}

void draw_circle(void){
	printf("  *  \n");
	printf("*   *\n");
	printf(" * *\n");
}

void draw_triangle(void){
     draw_intersec();
     draw_base();
}

void draw_intersec(void){
     printf("  /  \\\n");
     printf(" /    \\\n");
     printf("/      \\\n");
}

void draw_base(void){
     printf("--------\n");
}
