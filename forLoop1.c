#include <stdio.h>

int main() {
    int i;
    for(i=1;i<=10;i++){
        printf("Hello : %d\n",i);
    }

    for(i=10;i>=1;i--){
        printf("Bye : %d\n",i);
    }

    printf("\nEven Numbers from 1 to 20 : ");
    for(i=2;i<=20;i = i + 2){
        printf("%d ",i);
    }
    printf("\nOdd Numbers from 1 to 20 : ");
    for(i=1;i<=20;i = i + 2){
        printf("%d ",i);
    }
    return 0;
}