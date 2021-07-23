#include<stdio.h>
int lcm(int,int);
int main()
{
	int a,b,result;
	printf("Input first number: ");
	scanf("%d", &a);
	printf("Input second number: ");
	scanf("%d", &b);
	result=lcm(a,b);
	printf("The LCM of %d and %d is %d\n",a,b,result);
	return 0;
}
int lcm(int a,int b)
{
	static int common=1;
	if (common%a==0 && common%b==0)
	{
		return common;
	}
	common++;
	lcm(a,b);
	return common;
}
