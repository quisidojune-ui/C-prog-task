#include<stdio.h>
int main(){
    float hours_worked, rate, salary;
    printf("Enter hours worked:");
    scanf("%f", &hours_worked);
    printf("Enter rate Hourly rate:");
    scanf("%f", &rate);
    salary = hours_worked * rate;
    printf("Salary: %.2f\n", salary);
    return 0;
}