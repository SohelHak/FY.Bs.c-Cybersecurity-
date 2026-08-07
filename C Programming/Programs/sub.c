#include <stdio.h>

int main(){

    int num1, num2, sub;
    printf("Enter numbers1: ");
    scanf("%d", &num1);
    printf("Enter numbers2: ");
    scanf("%d", &num2);

    sub = num1 - num2;
    
    printf("Subtraction of %d and %d is %d\n", num1, num2, sub);
    return 0;
}