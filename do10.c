#include<stdio.h>

main()
{
	int i=1,n,fact=1; 
	
	printf("Enter a number: ");
    scanf("%d", &n);

	
	do{
		fact *=i;
		i++;
	}while(i<=n);
	
	 printf("The factorial of %d is: %d\n", n, fact);
}
