#include<stdio.h>
#include<string.h>
#define STRSIZ 10
typedef struct{
	char name[STRSIZ];
	double diameter;
	int moons;
	double orbit_time, rotation_time;
}planet;
void print_planet(planet pl);
int modify_planet(planet*);
int main(){
	planet earth;
	strcpy(earth.name, "earth");
	earth.diameter=64000;
	earth.moons = 1;
	earth.orbit_time = 365;
	earth.rotation_time=24;
        printf("%s %f %d %f %f\n", earth.name, earth.diameter, earth.moons, earth.orbit_time, earth.rotation_time);
       	modify_planet(&earth);
        printf("%s %f %d %f %f\n", (&earth)->name, (&earth)->diameter, (&earth)->moons, (&earth)->orbit_time, (&earth)->rotation_time);

	return 0;
}
void print_planet(planet pl){
      printf("%s\n", pl.name);
      printf("%f\n", pl.diameter);
      printf("%d\n", pl.moons);
      printf("%f\n", pl.orbit_time);
      printf("%f\n", pl.rotation_time);
}
int modify_planet(planet* pl){
      int result;
      result = scanf("%s%lf%d%lf%lf", (*pl).name, &((*pl).diameter), &((*pl).moons), &((*pl).orbit_time), &((*pl).rotation_time));
      if(result==5){
         result =1;
      }else if(result!=EOF){
         result = 0;
      }
      return result;
}
