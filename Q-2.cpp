#include<stdio.h>
int main()
{
	int a,s;
	printf("Print even numbers till:");
	scanf("%d", &s);
	printf("All the even numbers from 1 to %d are:\n",s);
	for(a=2;a<=s;a+=2)
	{
		printf("%d\n",a);
	}
	return 0;
}
