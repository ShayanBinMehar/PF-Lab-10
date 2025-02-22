#include <stdio.h>
#include <string.h>

struct Car {
    char make[20];
    char model[20];
    int year;
    int price;
    int mileage;
};

void addCar(struct Car cars[], int numCars) {
    printf("Enter car details:\n");
    printf("Make: ");
    scanf("%s", cars[numCars].make);
    printf("Model: ");
    scanf("%s", cars[numCars].model);
    printf("Year: ");
    scanf("%d", &cars[numCars].year);
    printf("Price: ");
    scanf("%d", &cars[numCars].price);
    printf("Mileage: ");
    scanf("%d", &cars[numCars].mileage);
}

void displayCars(struct Car cars[], int numCars) {
    printf("\nAvailable Cars:\n");
    for (int i = 0; i < numCars; i++) {
        printf("Car %d:\n", i + 1);
        printf("Make: %s\n", cars[i].make);
        printf("Model: %s\n", cars[i].model);
        printf("Year: %d\n", cars[i].year);
        printf("Price: %d\n", cars[i].price);
        printf("Mileage: %d\n", cars[i].mileage);
        printf("\n");
    }
}

void searchCar(struct Car cars[], int numCars, char searchTerm[]) {
    int found = 0;
    printf("\nSearch Results:\n");
    for (int i = 0; i < numCars; i++) {
        if (strstr(cars[i].make, searchTerm) || strstr(cars[i].model, searchTerm)) {
            printf("Car %d:\n", i + 1);
            printf("Make: %s\n", cars[i].make);
            printf("Model: %s\n", cars[i].model);
            printf("Year: %d\n", cars[i].year);
            printf("Price: %d\n", cars[i].price);
            printf("Mileage: %d\n", cars[i].mileage);
            printf("\n");
            found = 1;
        }
    }
    if (!found) {
        printf("No cars found matching the search term.\n");
    }
}

int main() {
    struct Car cars[100];
    int numCars = 0;
    int choice;

    while (1) {
        printf("\nCar Dealership Menu:\n");
        printf("1. Add New Car\n");
        printf("2. Display Available Cars\n");
        printf("3. Search Car\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addCar(cars, numCars);
                numCars++;
                break;
            case 2:
                displayCars(cars, numCars);
                break;
            case 3: {
                char searchTerm[20];
                printf("Enter search term (make or model): ");
                scanf("%s", searchTerm);
                searchCar(cars, numCars, searchTerm);
                break;
            }
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}