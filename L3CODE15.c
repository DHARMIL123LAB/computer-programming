#include <stdio.h>
int main() {
    int i, n;
    float num, sum = 0, mean;
    printf("Enter how many numbers: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    mean = sum / n;
    printf("Sum = %.2f\nMean = %.2f", sum, mean);
    return 0;
}
