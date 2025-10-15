#include <stdio.h>
int main() {
    int i;
    printf("Series A:\n");
    for(i = 1; i <= 5; i++)
        printf("%d %d\n", i, 6-i);

    printf("\nSeries B:\n");
    for(i = 1; i <= 5; i++) {
        if(i <= 2)
            printf("1 5\n");
        else if(i == 3)
            printf("2 4\n");
        else
            printf("3 3\n");
    }
    return 0;
}
