#include <stdio.h>
#include <math.h>

struct Point {
    int x;
    int y;
};

double calculateDistance(struct Point p1, struct Point p2) {
    double distance = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distance;
}

int isPointInsideRectangle(struct Point p, int rectX, int rectY, int rectWidth, int rectHeight) {
    if(p.x >= rectX && p.x <= rectX + rectWidth && p.y >= rectY && p.y <= rectY + rectHeight){
    	return 1;
	}
	else{
		return 0;
	}
}

int main() {
    struct Point point1, point2;

    printf("Enter coordinates for point 1 (x y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter coordinates for point 2 (x y): ");
    scanf("%d %d", &point2.x, &point2.y);

    double distance = calculateDistance(point1, point2);
    printf("Distance between the two points: %.2f\n", distance);

    int rectX = 0, rectY = 0, rectWidth = 10, rectHeight = 5;
    if (isPointInsideRectangle(point1, rectX, rectY, rectWidth, rectHeight) == 1) {
        printf("Point 1 lies within the rectangle.\n");
    } else {
        printf("Point 1 does not lie within the rectangle.\n");
    }
	
	if (isPointInsideRectangle(point2, rectX, rectY, rectWidth, rectHeight) == 1) {
        printf("Point 1 lies within the rectangle.\n");
    } else {
        printf("Point 1 does not lie within the rectangle.\n");
    }
    return 0;
}