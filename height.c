#include <stdio.h>
int main(){
int feet, inches;
int cm;

printf("Enter your height:");
scanf("%d", &cm);

feet = cm / 30.48;
inches = (cm / 2.54) - (feet * 12);

printf("Height:%d'%d\n", feet, inches);
    return 0;
}