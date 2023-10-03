#include<stdio.h>
int main()
{
	int n,r=0,c=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		n=n/10;
		r=c++;
	}
	printf("Length of the number is:%d",r);
	return 0;
}
