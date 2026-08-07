#include <stdio.h>

int main(){
    // Find Area of a circle
    int radius;
    printf("Enter Radius of a circle: ");
    scanf("%d", &radius);

    float Area = 3.14 * radius * radius;

    printf("Area of the Circle is %.2f\n", Area);
    return 0;
}