#include <stdio.h>

int main() {

    int firstangle, secondangle, thirdangle;

    printf("Enter First Angle: ");
    scanf("%d", &firstangle);

    printf("Enter Second Angle: ");
    scanf("%d", &secondangle);

    thirdangle = 180 - (firstangle + secondangle);

    printf("Third Angle Of Triangle = %d", thirdangle);

    return 0;
}

