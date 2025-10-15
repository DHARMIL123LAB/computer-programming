#include <stdio.h>
int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(temp > 0) {
        sum += temp % 10;
        temp /= 10;
    }
    printf("Sum of digits = %d", sum);
    return 0;
}
