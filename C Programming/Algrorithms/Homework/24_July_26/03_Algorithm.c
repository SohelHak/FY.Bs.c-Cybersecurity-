#include <stdio.h>

int main(){
    int A, B;
    
    printf("Enter the value of A: ");
    scanf("%d", &A);
    printf("Enter the value of B: ");
    scanf("%d", &B); 

    /*
    A = 58
    B = 74
    */

    int temp = A; // == temp = 58
    A = B; // == A = 74 
    B = temp; // == B = 58
     
    
    printf("The value of A is %d\nThe value of B is %d\n",A, B);    
    return 0;
}