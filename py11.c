#include<stdio.h>
main()
{
	int n,i,j,k=1;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			
				printf("%d",k);
				k++;
		    
		}
		printf("\n");
	}
}
