#include <stdio.h>

float base, height;

/* No arguments, no return value */
void areaNoArgNoReturn() {
    printf("\n[No Arguments, No Return Value]\n");
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);

    float area = 0.5 * base * height;
    printf("Area of triangle = %.2f\n", area);
}

/* Arguments, no return value */
void areaArgNoReturn(float b, float h) {
    float area = 0.5 * b * h;

    printf("\n[Arguments, No Return Value]\n");
    printf("Area of triangle = %.2f\n", area);
}

/* No arguments, returns a value */
float areaNoArgReturn() {
    return 0.5 * base * height;
}

/* Arguments, returns a value */
float areaArgReturn(float b, float h) {
    return 0.5 * b * h;
}

int main() {
    float b, h, area;

    areaNoArgNoReturn();

    printf("\nEnter base and height: ");
    scanf("%f %f", &b, &h);

    areaArgNoReturn(b, h);

    area = areaNoArgReturn();
    printf("\n[No Arguments, Returns a Value]\n");
    printf("Area = %.2f\n", area);

    area = areaArgReturn(b, h);
    printf("\n[Arguments, Returns a Value]\n");
    printf("Area = %.2f\n", area);

    return 0;
}