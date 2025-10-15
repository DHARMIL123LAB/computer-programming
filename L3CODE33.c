#include <stdio.h>
int main() {
    int num, square, temp, digits = 0, lastDigits;
    printf("Enter a number: ");
    scanf("%d", &num);
    square = num * num;
    temp = num;

    // count digits
    while(temp > 0) {
        digits++;
        temp /= 10;
    }

    lastDigits = square % (int)pow(10, digits);
    if(lastDigits == num)
        printf("%d is Automorphic", num);
    else
        printf("%d is not Automorphic", num);
    return 0;
}
