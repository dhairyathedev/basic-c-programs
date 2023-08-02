#include <stdio.h>

int main() {
    int x, y, z;
    printf("Enter the side A of a triangle: ");
    scanf("%d", &x);
    
    printf("Enter the side B of a triangle: ");
    scanf("%d", &y);
    
    printf("Enter the side C of a triangle: ");
    scanf("%d", &z);
    
    // Check if the sum of any two sides is greater than the third side
    if ((x + y > z) && (y + z > x) && (z + x > y)) {
        printf("It is a valid triangle.\n");
    } else {
        printf("Not a valid triangle.\n");
    }
    
    return 0;
}
