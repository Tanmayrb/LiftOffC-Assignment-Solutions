#include<stdio.h>
int main()
{float c,f;
printf("Enter temperature in Celsius::\n");
scanf("%f",&c);
f=((c*9)/5)+32;
printf("\n%.2f Celsius=%.2fFahrenheit",c,f);
return 0;
}
