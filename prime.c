#include <stdio.h>

int main() {
    int no,i,f = 0;
    printf("Enter a number : ");
    scanf("%d",&no);

    for(i=1;i<=no;i++){
        if(no % i == 0){
            printf("%d ",i);
            f++;
        }
    }

    if(f == 2){
        printf("\n%d is prime",no);
    }
    else{
        printf("\n%d is not prime",no);
    }
    return 0;
}