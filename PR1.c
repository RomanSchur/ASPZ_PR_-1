#include <stdio.h>
#define swap(t, x, y) do { \
    if (sizeof(x) != sizeof(y) || sizeof(x) != sizeof(t)) { \
        printf("...Помилка, намагання обміну різних типів даних!!!\n"); \
    } else { \
        t num = x; \
        x = y; \
        y = num; \
    } \
} while (0)
int main() {
    int a = 5;
    int b = 9;
    double x = 3.14;
    double y = 2.72;

    printf("Після обміну int чисел: ");
    swap(int, a, b);
    printf("a = %d, b = %d\n", a, b);

    printf("Після обміну double чисел: ");
    swap(double, x, y);
    printf("x = %.2f, y = %.2f\n", x, y);

    printf("Обмін int  та double:");
    swap(int, a, x);  // Цей обмін викликає помилку
    return 0;
}
           
