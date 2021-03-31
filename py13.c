#include<stdio.h>
main()
{
	int n,i,j;
	char x='a';
	
	printf("\nEnter the limit:");
	scanf("%d",&n);
	x='a';
	for(i=1;i<=n;i++)
	{
		x='a';
		for(j=1;j<=i;j++)
        {
			printf("%c",x);
			x++;
		}
		printf("\n");
	}
}
