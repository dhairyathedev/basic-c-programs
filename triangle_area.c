// Aim: Area of triangle
#include <stdio.h>

int main() {
    int x, y;
    printf("Enter the height of a triangle: ");
    scanf("%d", &x);
    
    printf("Enter the base of a triangle: ");
    scanf("%d", &y);
    
    printf("Area of triangle is %0.2f sq units", 0.5*x*y);
    return 0;
}
