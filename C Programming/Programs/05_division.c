#include <stdio.h>

int main(){

    int num1, num2, sum;
    printf("Enter numbers1: ");
    scanf("%d", &num1);
    printf("Enter numbers2: ");
    scanf("%d", &num2);

    sum = num1 / num2;
    
    printf("Division of %d and %d is %d\n", num1, num2, sum);
    return 0;
}
