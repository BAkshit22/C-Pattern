#include<stdio.h>
main()
{
	int n,i,j;
	printf("\nEnter the limit:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
