#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    long long A, B; int A_even, B_even; int win;
    // Сообщаем пользователю, что делает программа
    printf("=== СИСТЕМА КОНТРОЛЯ ПОБЕДЫ ===\n");
    printf("Введите два целых числа (код A и код B): ");

    // Считываем два числа
    if (scanf("%lld %lld", &A, &B) != 2) {
        printf("Ошибка ввода\n");
        return 1;
    }

    // Вычисляем признак чётности для каждого числа
    A_even = (A % 2 == 0);
    B_even = (B % 2 == 0);

    // Условие победы: ровно один из них чётный
    win = (A_even != B_even); // XOR по логике истинности

    // Выводим результат
    printf("Победа (1 - да, 0 - нет): %d\n", win);

    return 0;
}