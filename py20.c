#include<stdio.h>
main()
{
	int n,i,j,k;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=n;k>=i;k--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	
	
}
