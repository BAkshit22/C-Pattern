#include<stdio.h>
main()
{
	int n,i,j,k,m;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	m=n;
	
	for(i=1;i<=n;i++)
	{	
		m--;
		for(j=1;j<=i;j++)
		{
			printf(" ");
		}
		for(k=i;k<=n;k++)
		{
			if(i%2==0)
			{
				printf("%d",m);
			}
			else
			{
				printf("*");
					
			}
		}
		printf("\n");
	}
	
	
}
