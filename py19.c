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
}
