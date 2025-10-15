#include <stdio.h>
int main() {
    float gross=10000;
    float net = gross - (gross*0.10);
    printf("Net Sales = %.2f", net);
    return 0;
}
