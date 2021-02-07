#include <stdio.h>
int main()
{
 int phy,chem,bio,math,comp;
 float Percent;
 printf("Enter five subjects marks in order PHY,CHEM,BIO,MATH,COMP\n");
 scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
 Percent=(phy+chem+bio+math+comp)/5.0;
 printf("Percentage =%.2f\n",Percent);
 if(Percent>=90)
   printf("Grade A");
 else if(Percent>=80)
   printf("Grade B");
 else if(Percent>=70)
   printf("Grade C");
 else if(Percent>=60)
   printf("Grade D");
 else if(Percent>=40)
   printf("Grade E");
 else
   printf("Grade F");
   return 0;
 }
