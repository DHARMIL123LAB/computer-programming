#include <stdio.h>
int main() {
    int n, i, num = 2;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        printf("%d ", num);
        num += 2;
    }
    return 0;
}
