#include <stdio.h>
int main(){
    int n = 1 > 3;
    printf("Enter a number (1-3):");
    scanf("%d", &n);
    if (n >= 1 && n <= 3){
        printf("Valid", n);
    }else{
        printf("Invalid\n");
    }
    return 0;
}