#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;
    printf("Enter marks of 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%f", &m1);
    printf("Subject 2: ");
    scanf("%f", &m2);
    printf("Subject 3: ");
    scanf("%f", &m3);
    printf("Subject 4: ");
    scanf("%f", &m4);
    printf("Subject 5: ");
    scanf("%f", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;
    printf("\nTotal Marks = %.2f", total);
    printf("\nPercentage = %.2f%%", percentage);
    if (percentage >= 90)
        printf("\nGrade = A+");
    else if (percentage >= 80)
        printf("\nGrade = A");
    else if (percentage >= 70)
        printf("\nGrade = B");
    else if (percentage >= 60)
        printf("\nGrade = C");
    else if (percentage >= 50)
        printf("\nGrade = D");
    else
        printf("\nGrade = F");
    return 0;
}