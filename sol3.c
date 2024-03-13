#include <stdio.h>

int main() {
    int x, y, z;

    printf("Enter three integers (x, y, z): ");
    scanf("%d %d %d", &x, &y, &z);

    if (x >= 1 && x <= 100 && y >= 1 && y <= 100 && z >= 1 && z <= 100) {
        int secondLargest;
        if ((x >= y && x <= z) || (x >= z && x <= y)) {
            secondLargest = x;
        } else if ((y >= x && y <= z) || (y >= z && y <= x)) {
            secondLargest = y;
        } else {
            secondLargest = z;
        }

        printf("The second largest number is: %d\n", secondLargest);
    } else {
        printf("Input values do not satisfy the constraints.\n");
    }

    return 0;
}
