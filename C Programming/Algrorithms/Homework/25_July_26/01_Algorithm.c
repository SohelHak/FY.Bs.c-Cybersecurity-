#include <stdio.h>

int main(){
    // Find Simple interest
    int P, T, R;
    printf("Enter Principle Amount: ");
    scanf("%d", &P);
    printf("Enter Rate: ");
    scanf("%d", &R);
    printf("Enter Time: ");
    scanf("%d", &T);

    int SI = (P * R * T) / 100;

    printf("Simple Interest is %d\n", SI);
    return 0;
}