#include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    printf("%d\n",a);
    printf("%d\n",a++);
    printf("%d\n",++a);
    printf("%d\n",--a);
    printf("%d\n",a--);
    printf("%d\n",a);
    a+=10;
    printf("%d\n",a);
    printf("%d",(a>b)?a:b);
    return 0;
}