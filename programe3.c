//write a c programe to show diferent type of variable
#include<stdio.h>
int a;//global variable
int main()
{
    int b;//local variable
    static int c;//static variable
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);
    return 0;
}