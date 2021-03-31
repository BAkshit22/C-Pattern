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
			printf("%d",i);
		}
		printf("\n");
	}
}
