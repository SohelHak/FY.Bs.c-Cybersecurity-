#include <stdio.h>

int main(){
    // Check Given number is even or odd
    int Num;
    printf("Enter Number: ");
    scanf("%d", &Num);

    if(Num % 2 == 0){
        printf("%d is Even\n", Num);
    }
    else
        printf("%d is Odd\ns", Num);
    return 0;
}