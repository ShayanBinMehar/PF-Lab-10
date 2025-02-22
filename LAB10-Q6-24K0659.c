#include <stdio.h>

#define MAX_TEMP 10

int countExceedances = 0;

int checkTemperature(int temp) {
    if (temp > MAX_TEMP) {
        countExceedances++;
        printf("Temperature exceeded the limit of %d degrees Celsius.\n", MAX_TEMP);
        return 0;
    }
    else{
    	return 1;
	}
}

int main() {
    int temperature, checker = 0;

    while (checker == 0) {
        printf("Enter the current temperature in Celsius: ");
        scanf("%d", &temperature);

        checker = checkTemperature(temperature);

        printf("Number of times the temperature exceeded the limit: %d\n", countExceedances);

    }

    return 0;
}