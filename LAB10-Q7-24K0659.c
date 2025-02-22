#include <stdio.h>

#define METERS_PER_KILOMETER 1000

int conversionCount = 0;

double metersToKilometers(float meters) {
    conversionCount++;
    return meters / METERS_PER_KILOMETER;
}

int main() {
    float meters, kilometers;

    printf("Enter the distance in meters: ");
    scanf("%f", &meters);

    kilometers = metersToKilometers(meters);

    printf("%f meters is equal to %f kilometers.\n", meters, kilometers);
    printf("The conversion function was called %d times.\n", conversionCount);

    return 0;
}