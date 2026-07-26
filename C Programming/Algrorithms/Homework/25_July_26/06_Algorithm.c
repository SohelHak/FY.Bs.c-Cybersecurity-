#include <stdio.h>

int main(){
    // Check Given number is positive or not

    int Num;
    printf("Enter Number: ");
    scanf("%d", &Num);

    if(Num >= 0){
        printf("%d is Positive Number!\n", Num);
    }
    else
        printf("%d is Negative Number!\n", Num);

    return 0;
}