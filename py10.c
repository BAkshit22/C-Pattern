#include<stdio.h>
main()
{
	int n,i,j,k=3;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k%2==0)
			{
				printf("R");
				k++;
			}
			else
			{
				printf("T");
				k++;
			}
		}
		printf("\n");
	}
}
