#include <stdio.h>
#include <string.h>

struct TravelPackage {
    char name[50];
    char destination[50];
    int duration;
    int cost;
    int seatsAvailable;
};

void addPackage(struct TravelPackage packages[], int numPackages) {
    printf("Enter package details:\n");
    printf("Name: ");
    scanf("%s", packages[numPackages].name);
    printf("Destination: ");
    scanf("%s", packages[numPackages].destination);
    printf("Duration (in days): ");
    scanf("%d", &packages[numPackages].duration);
    printf("Cost: ");
    scanf("%d", &packages[numPackages].cost);
    printf("Number of seats available: ");
    scanf("%d", &packages[numPackages].seatsAvailable);
    (numPackages)++;
}

void displayPackages(struct TravelPackage packages[], int numPackages) {
    printf("\nAvailable Travel Packages:\n");
    for (int i = 0; i < numPackages; i++) {
        printf("Package %d:\n", i + 1);
        printf("Name: %s\n", packages[i].name);
        printf("Destination: %s\n", packages[i].destination);
        printf("Duration: %d days\n", packages[i].duration);
        printf("Cost: %d\n", packages[i].cost);
        printf("Seats Available: %d\n\n", packages[i].seatsAvailable);
    }
}

void bookPackage(struct TravelPackage packages[], int numPackages) {
    int packageNumber;
    printf("Enter the package number you want to book: ");
    scanf("%d", &packageNumber);

    if (packageNumber > 0 && packageNumber <= numPackages) {
        if (packages[packageNumber - 1].seatsAvailable > 0) {
            packages[packageNumber - 1].seatsAvailable--;
            printf("Package booked successfully!\n");
        } else {
            printf("Sorry, this package is fully booked.\n");
        }
    } else {
        printf("Invalid package number.\n");
    }
}

int main() {
    struct TravelPackage packages[100];
    int numPackages = 0;
    int choice;

    while (1) {
        printf("\nTravel Agency Menu:\n");
        printf("1. Add New Package\n");
        printf("2. Display Available Packages\n");
        printf("3. Book a Package\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addPackage(packages, numPackages);
                numPackages++;
                break;
            case 2:
                displayPackages(packages, numPackages);
                break;
            case 3:
                bookPackage(packages, numPackages);
                break;
            case 4:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}