#include<stdio.h>
main()
{
	int n,i,j,k,m;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	m=n;
	
	for(i=1;i<=n;i++)
	{	
		for(j=i;j<m;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("*");
		}
		i++;
		m++;
		printf("\n");
	}
}
