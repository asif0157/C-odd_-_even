#include <stdio.h>
int main(){
    int num=2;
    printf("Enter Number:");
    scanf("%d", &num);
    if (num%2==0)
    {
        printf("This number is even");
    }
    else{
        printf("This number is odd");
    }
    return 0;
}