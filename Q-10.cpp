#include<stdio.h>
int main()
{
	int n,r,r1;
	
	printf("Enter an integer:");
	scanf("%d",&n);
	while(n!=0)
	{
		r1=n%10;
		r=r*10+r1;
		n/=10;
	}
	printf("Reversed number=%d",r);
	return 0;
}
