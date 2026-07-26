#include <stdio.h>

int main(){
    // Find Area of the Rectangle

    int L, W;
    printf("Enter Length of a rectangle: ");
    scanf("%d", &L);
    printf("Enter Width of a rectangle: ");
    scanf("%d", &W);

    int Area = W * L;

    printf("The Area of the rectangle is %d\n", Area);
    return 0;
}