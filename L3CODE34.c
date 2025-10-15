#include <stdio.h>
int main() {
    int n, i;
    long long t1 = 1, t2 = 1, next;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: ");
    for(i = 1; i <= n; i++) {
        if(i == 1 || i == 2)
            printf("1 ");
        else {
            next = t1 + t2;
            printf("%lld ", next);
            t1 = t2;
            t2 = next;
        }
    }
    return 0;
}
