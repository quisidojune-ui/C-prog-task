#include <stdio.h>
int main(){
    int cm, feet, inches;
    printf("Enter height:");
    scanf("%d", &cm);
    
    feet = cm / 30.48;
    inches = (cm / 2.54) - (feet*12);
    printf("%d", feet, inches);
    
}