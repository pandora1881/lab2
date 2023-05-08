#include <stdio.h>

int main() {
    int a = 2, b = 10, c = 20;
    float y = (a + b * c) / (2 * a - b - c) + a / (b + 2.0);
    printf("Значення функції y = %.2f", y);
    return 0;
}
