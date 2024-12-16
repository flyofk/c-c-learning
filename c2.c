#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Функция для вычисления длины строки
size_t my_strlen(const char* str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

int main() {
    char str[100]; // Массив для хранения строки
    
    // Считываем строку с консоли
    printf("Введите строку для проверки на палиндром: ");
    fgets(str, sizeof(str), stdin);

    // Удаляем символ новой строки, если он есть
    size_t len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0'; // Обрезаем символ новой строки
        len--; // Уменьшаем длину строки
    }

    // Проверка на палиндром
    bool isPalindrome = true;
    for (size_t i = 0; i < len / 2; ++i) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    // Вывод результата
    if (isPalindrome) {
        printf("Строка \"%s\" является палиндромом.\n", str);
    } else {
        printf("Строка \"%s\" не является палиндромом.\n", str);
    }

    return 0;
}
