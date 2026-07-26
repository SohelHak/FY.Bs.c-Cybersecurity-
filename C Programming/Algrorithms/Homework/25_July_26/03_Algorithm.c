#include <stdio.h>

int main(){
    // Find Area And Perimeter of a circle
    int R;
    printf("Enter Radius of a circle: ");
    scanf("%d", &R);

    float Area = 3.14 * R * R;
    float Perimeter = 2 * 3.14 * R;

    printf("Area of the Circle is %.2f\nPerimeter of Circle is %.2f\n", Area, Perimeter);
    return 0;
}