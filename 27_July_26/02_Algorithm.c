#include <stdio.h>

int main(){
    // Print sum of all whole number using DO WHILE LOOP
    int sum = 0, num = 1;
    do{
        sum = sum+num;
        num = num + 1;
    } while(num <= 10);
    printf("%d\n", sum);
    return 0;
}