#include <stdio.h>

int main(){

    int num1, num2, multiply;
    printf("Enter numbers1: ");
    scanf("%d", &num1);
    printf("Enter numbers2: ");
    scanf("%d", &num2);

    multiply = num1 * num2;
    
    printf("Multiply of %d and %d is %d\n", num1, num2, multiply);
    return 0;
}