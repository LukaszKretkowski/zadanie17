#include <stdio.h>
#include <math.h>

float volume_cuboid(float x, float y, float h){
return(x*y*h);
}
float volume_kula(float r){
return(4.0/3.0) * M_PI * (r*r*r);
}
int main(){
float x, y, h, r;

printf("Podaj dlugosc podstawy prostopadloscianu");
scanf("%f", &x);

printf("Podaj szerokosc podstawy prodtopadloscianu");
scanf("%f", &y);

printf("Podaj wysokosc prostopadloscianu");
scanf("%f", &h);

printf("Podaj promien kuli");
scanf("%f", &r);

printf ("Objetosc prostopadloscianu: %f\n", volume_cuboid(x, y, h));
printf ("Objetosc kuli: %f\n",volume_kula(r));

return(0);

}
