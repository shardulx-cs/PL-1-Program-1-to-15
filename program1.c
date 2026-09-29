#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char ch;
    char name[50];

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float value: ");
    scanf("%f", &b);

    printf("Enter a double value: ");
    scanf("%lf", &c);

    printf("Enter a character: ");
    scanf(" %c", &ch);

    printf("Enter a name: ");
    scanf("%s", name);

    printf("\n--- Output ---\n");
    printf("Integer = %d\n", a);
    printf("Float = %.2f\n", b);
    printf("Double = %.2lf\n", c);
    printf("Character = %c\n", ch);
    printf("Name = %s\n", name);

    return 0;
}