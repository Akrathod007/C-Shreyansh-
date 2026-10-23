#include <stdio.h>

int main() {
    int no,i;
    printf("Enter a number : ");
    scanf("%d",&no);

    for(i=1;i<=10;i++){
        printf("%d X %d = %d\n",no,i,no * i);
    }
    return 0;
}