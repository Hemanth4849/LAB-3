#include<stdio.h>
int main()
{
	int a,s;
	printf("Print odd numbers till:");
	scanf("%d", &s);
	printf("All the odd numbers from 1 to %d are:\n",s);
	for(a=1;a<=s;a+=2)
	{
		printf("%d\n",a);
	}
	return 0;
}
