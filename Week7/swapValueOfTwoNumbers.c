// Lab 7 - Two numbers are entered from the keyboard with integer variables A and B. Write the program with the C language, which changes the values of the A and B variables between them.

#include <stdio.h>

int main()
{
    int a,b,n,m;
    printf("enter the first number\n");
    scanf("%d",&a);
    printf("enter the second number\n");
    scanf("%d",&b);
    n = a;
    m = b;
    printf("new value of %d = %d\n",a,m);
    printf("new value of %d = %d\n",b,n);

    return 0;
}