#include<stdio.h>

main()
{
	int i,n;
	printf("Enter the value of n=");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		if(i%2==0){
			printf("%d\n",i);
		}
	}
}
