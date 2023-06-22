#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1) {
    int temp = p1->x;
    p1->x = p1->y;
    p1->y = temp;
}

int main() {
    struct Point point1 = {2, 3};
    
    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);

    // Swap the fields of the two structures
    swapPoints(&point1);

    printf("After swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    
    return 0;
}
