#include <stdio.h>
int main() {
    float gross=50000;
    float net = gross + (gross*0.10) - (gross*0.03);
    printf("Net Salary = %.2f", net);
    return 0;
}
