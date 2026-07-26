#include <stdio.h>

int main(){
    int number1, number2, sum;
    printf("Enter Number: \n"); 
    scanf("%d%d", &number1, &number2);
    // scanf("%d/n", &number2);

    sum = number1 + number2;
    printf("%d\n", sum);

    return 0;
}