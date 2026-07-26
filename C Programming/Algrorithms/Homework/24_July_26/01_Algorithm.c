#include <stdio.h>

int main(){
    // Check even number is even and odd
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even number\n", num);
    }
    else{
        printf("%d is odd number\n", num);
    }
    return 0;
}