#include<stdio.h>
int main()
{
	int age;
	printf("enter  your age...!\n");
	scanf("%d",age);
	if (age==18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible for vote");
	}
	return 0;
}
