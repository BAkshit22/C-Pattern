#include<stdio.h>
main()
{
	int n,i,j,p=0,q=1;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
