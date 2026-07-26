#include <stdio.h>

int main(){
    // Find Area and Perimeter of the circle

    int radius;
    
    printf("Enter the radius of the Circle: ");
    scanf("%d", &radius);

    float area = 3.14 * radius * radius;
    float perimeter = 2 * 3.14 * radius;

    printf("The area of a circle is %.2f\nThe perimeter of a circle is %.2f\n", area, perimeter);
    return 0;
}