#include <stdio.h>
long double summ(long double, long double);
int main() {
    long double x, n;
    printf("Введите переменую\n");
    if (!scanf("%Lf", &x)) {
        printf("ERROR\n");
        return 0;
        if (x == EOF) { printf("ERROR\n"); return 0; }
    }
    printf("Введите количество членов ряда\n");
    if (!scanf("%Lf", &n)) {
        printf("ERROR\n");
        return 0;
    }
    if (n == EOF) { printf("ERROR\n"); return 0; }
    long double sum = summ(x, n);
    printf("cos(x) = %.15Lf\n", sum);
    return 0;
}

long double summ(long double x, long double n) {
    long double sum = 1;
    long double y = x * x;
    long double peremen = 1;
    int a = 0;
    for (int i = 1; i < n; i++) {
        peremen = peremen * (y / ((a + 1) * (a + 2)));
        a += 2;
        sum = sum + peremen;
    }
    return sum;
}
