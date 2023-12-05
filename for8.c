#include<stdio.h>

main()
{
	int i,n,fact; 
	
	printf("Enter a number: ");
    scanf("%d", &n);

	
	for(i=1,fact=1;i<=n;i++){
		fact *=i;
	}
	
	 printf("The factorial of %d is: %d\n", n, fact);
}
