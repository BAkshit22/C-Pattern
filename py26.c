#include<stdio.h>
main()
{
	int n,i,j,k,m;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{	
	 	m=1;
		for(j=i;j<n;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("%d",m);
			m++;
		}
		printf("\n");
	}
}
