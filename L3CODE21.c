#include <stdio.h>
int main() {
    int num, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    printf("Digits: ");
    while(temp > 0) {
        printf("%d ", temp % 10);
        temp /= 10;
    }
    return 0;
}
