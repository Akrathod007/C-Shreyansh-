#include <stdio.h>

int main() {
    int i,no,sum = 0,es = 0,os = 0;
    printf("Enter a number : ");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        printf("%d ",i);
        sum = sum + i;
        if(i % 2 == 0){
           es = es + i; 
        }
        else{
            os = os + i;
        }
    }
    
    printf("\nSum is %d",sum);
    printf("\nEven Sum is %d",es);
    printf("\nOdd Sum is %d",os);
    return 0;
}