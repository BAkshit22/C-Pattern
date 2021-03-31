#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=0;j<i-1;j++)
		{
			printf(" ");
		}
		for(k=n;k>=i;k--)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=2;i<=n;i++)
	{	
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
