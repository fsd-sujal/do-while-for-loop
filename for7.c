#include<stdio.h>

main()
{
	int i,n,sum; 
	printf("Enter The Number =");
	scanf("%d",&n);
	
	for(sum=0;i<=n;i++){
		sum = sum + i;	
	}

	printf("sum is 1 to n   = %d",sum);
}
