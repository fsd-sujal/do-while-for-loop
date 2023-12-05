#include<stdio.h>

main()
{
	int i,n,sum=0; 
	printf("Enter The Number =");
	scanf("%d",&n);
	
	do{
		sum = sum + i;
		i++;
	}while(i<=n);

	printf("sum is 1 to n   = %d",sum);
}
