#include <stdio.h>
int main() {
    int i, j, sum = 0, flag;
    for(i = 2; i <= 500; i++) {
        flag = 0;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            sum += i;
    }
    printf("Sum of primes between 1 and 500 = %d", sum);
    return 0;
}
