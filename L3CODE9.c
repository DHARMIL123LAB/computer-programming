#include <stdio.h>
int main() {
    int n, i, num = 2, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        sum += num;
        num += 2;
    }
    printf("Sum of first %d even numbers = %d", n, sum);
    return 0;
}
