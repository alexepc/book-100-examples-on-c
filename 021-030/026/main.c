#include <stdio.h>

/* Проверяем является ли число палиндромом */
int main(void)
{
    int n, reversedInteger = 0, remainder, originalInteger;

    printf("Введите целое число: ");
    scanf("%d", &n);

    originalInteger = n;

    /* Вычисляем обратное число */
    while (n != 0) {
        remainder = n % 10;
        reversedInteger = reversedInteger * 10 + remainder;
        n /= 10;
    }

    /* Палиндром если исходное число и обратное одинаковые */
    if (originalInteger == reversedInteger)
        printf("%d - палиндром\n", originalInteger);
    else
        printf("%d - не палиндром\n", originalInteger);

    return 0;
}