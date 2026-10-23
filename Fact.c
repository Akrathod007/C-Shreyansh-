#include <stdio.h>

int main() {
    int no,i,fact = 1;
    printf("Enter a number : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        fact = fact * i;
    }
    printf("\nfactorial of %d is %d",no,fact);
    return 0;
}