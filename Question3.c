#include<stdio.h>
int main()
{
float r,d,circum,area;
printf("Enter the radius of circle:");
scanf("%f",&r);
d=2*r;
circum=2*3.14*r;
area=3.14*(r*r);
printf("Diametre of circle=%.2f units \n",d);
printf("Circumference of circle=%.2f units \n",circum);
printf("Area of circle=%.2f units \n",area);
return 0;
}
