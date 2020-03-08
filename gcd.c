#include<stdio.h>

int gcd(int a,int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}

int main()
{
	int a,b;
	printf("Enter 2 nos:\n");
	scanf("%d %d",&a,&b);
	printf("\nGCD:%d",gcd(a,b));
	return 0;
}