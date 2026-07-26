#include <stdio.h>

int main(){
    char name[30];
    printf("Enter your name: \n"); 
    scanf("%s", &name);
    
    printf("Hello dear %s how are you?\n", name);

    return 0;
}