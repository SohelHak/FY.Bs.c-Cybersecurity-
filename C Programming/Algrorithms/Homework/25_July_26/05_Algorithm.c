#include <stdio.h>

int main(){
    // Check Leap year or not
    int Year;
    printf("Enter Year: ");
    scanf("%d", &Year);

    if(Year % 4 == 0 || Year % 400 == 0){
        printf("%d is Leap Year\n", Year);
    }
    else
        printf("%d is Not Leap Year\n", Year);
    return 0;
}