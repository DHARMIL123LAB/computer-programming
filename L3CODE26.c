#include <stdio.h>
#include <math.h>
int main() {
    int num, temp, sum = 0, digits = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    // count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    temp = num;
    while(temp > 0) {
        sum += pow(temp%10, digits);
        temp /= 10;
    }

    if(sum == num)
        printf("%d is an Armstrong number", num);
    else
        printf("%d is not an Armstrong number", num);

    return 0;
}
