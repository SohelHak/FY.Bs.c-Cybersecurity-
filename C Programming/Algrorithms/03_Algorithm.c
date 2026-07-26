#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Enter Number: \n"); 
    scanf("%f%f%f", &num1, &num2, &num3);

    float average = (num1 + num2 + num3) / 3;
    printf("%.2f\n", average);

    return 0;
}