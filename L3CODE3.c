#include <stdio.h>
int main() {
    int i, num = 2;
    for(i = 1; i <= 10; i++) {
        printf("%d ", num);
        num += 2;
    }
    return 0;
}
