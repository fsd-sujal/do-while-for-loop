#include<stdio.h>

main()
{
	int i=1,n;
	printf("Enter the value of n=");
	scanf("%d",&n);
	do{
		printf("%d\n",n);
		n--;
	}while(n>=i);
}

