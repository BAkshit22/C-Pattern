#include<stdio.h>
main()
{
	int n,i,j;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
