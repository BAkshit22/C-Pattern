#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{	
		for(j=1;j<i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=n;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
