#include <stdio.h>
int main() {
    float bytes=1048576;
    printf("KB = %.2f\n", bytes/1024);
    printf("MB = %.2f\n", bytes/(1024*1024));
    printf("GB = %.6f", bytes/(1024*1024*1024));
    return 0;
}
