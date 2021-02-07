#include <stdio.h>
int main()
{
       int a,b;
       int add,sub,mul,mod;float div;
       printf("Enter the two numbers for calculation\n");
       scanf("%d%d",&a,&b);
       add=a+b;
       mod=a%b;
       sub=a-b;
       mul=a*b;
       div= (float)a/b;
       printf("ADDITION is %d+%d=%d\n",a,b,add);
       printf("SUBTRACTION is %d-%d=%d\n",a,b,sub);
       printf("REMAINDER is %d%%%d=%d\n",a,b,mod);
       printf("DIVISION is %d/%d=%f\n",a,b,div);
       return 0;
}

