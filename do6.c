#include <stdio.h>

main() {
    int n;  // Input value N
    printf("Enter a number N : ");
    scanf("%d", &n);

    
    int i= n;

    do {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
        i--;
    } while (i >= 1);

}
			
