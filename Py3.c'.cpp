#include<stdio.h>
main()
{
	int n,i,j;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
        {
			printf("*");
		}
		printf("\n");
	}
}
