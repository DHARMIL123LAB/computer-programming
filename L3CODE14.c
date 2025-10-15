#include <stdio.h>
int main() {
    int i;
    float num, sum = 0, mean;
    for(i = 1; i <= 10; i++) {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    mean = sum / 10;
    printf("Sum = %.2f\nMean = %.2f", sum, mean);
    return 0;
}
