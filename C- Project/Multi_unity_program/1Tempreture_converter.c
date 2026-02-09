
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("\nEnter temperature in Celsius: ");
    scanf("%f", & celsius);

    fahrenheit = (9.0/5.0 * celsius) + 32;

    printf("\nTemperature in Fahrenheit: %.1f", fahrenheit);

    return 0;
}


    


