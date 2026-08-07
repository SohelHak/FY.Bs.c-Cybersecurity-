#include <stdio.h>

int main(){

    int num1, num2, mod;
    printf("Enter numbers1: ");
    scanf("%d", &num1);
    printf("Enter numbers2: ");
    scanf("%d", &num2);

    mod = num1 % num2;
    
    printf("Modulus of %d and %d is %d\n", num1, num2, mod);
    return 0;
}