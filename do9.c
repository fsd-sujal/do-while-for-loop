#include<stdio.h>

main()
{
	int i,n; 
	printf("Enter The Number =");
	scanf("%d",&n);
	printf("table \n");
	do{
		printf("%d * %d = %d \n",n,i,n*i);
		i++;
	}while(i<=10);
}
