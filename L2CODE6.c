#include <stdio.h>
int main() {
    float s1, s2, s3, total, avg;
    printf("Enter marks of 3 subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    avg = total / 3;

    if(s1 < 35 || s2 < 35 || s3 < 35)
        printf("Total = %.2f\nAverage = %.2f\nResult: Fail (Less than 35 in a subject)", total, avg);
    else if(avg >= 70)
        printf("Total = %.2f\nAverage = %.2f\nGrade: Distinction", total, avg);
    else if(avg >= 60)
        printf("Total = %.2f\nAverage = %.2f\nGrade: First Class", total, avg);
    else if(avg >= 50)
        printf("Total = %.2f\nAverage = %.2f\nGrade: Second Class", total, avg);
    else if(avg >= 35)
        printf("Total = %.2f\nAverage = %.2f\nGrade: Third Class", total, avg);
    else
        printf("Total = %.2f\nAverage = %.2f\nResult: Fail", total, avg);

    return 0;
}
