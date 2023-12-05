#include<stdio.h>

main()
{
	int i,n; 
	printf("Enter The Number =");
	scanf("%d",&n);
	printf("table \n");
	for(i=1;i<=10;i++){
		printf("%d * %d = %d \n",n,i,n*i);
	}
}
