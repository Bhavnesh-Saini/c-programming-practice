#include <stdio.h>
int main(void)

{
    double celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);
    return 0;
}