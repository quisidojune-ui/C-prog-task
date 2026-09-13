#include <stdio.h>
int main(){
    int n1, d1, n2, d2;
    int sumN, sumD;
    int prodN, prodD;
    printf("Input the numerator of fraction1:");
    scanf("%d", &n1);
    printf("Input the denominator of fraction1:");
    scanf("%d", &d1);
    printf("Input the numerator of fraction2:");
    scanf("%d", &n2);
    printf("Input the denominator of fraction2:");
    scanf("%d", &d2);

    sumN = (n1 * d2) + (n2 * d1);
    sumD = d1 * d2;
    prodN = n1 * n2;
    prodD = d1 * d2;

    printf("Sum of %d/%d and %d/%d: %d/%d\n", n1, d1, n2, d2, sumN, sumD);
    printf("Product of %d/%d and %d/%d: %d/%d\n", n1, d1, n2, d2, prodN, prodD);
    return 0;
}
