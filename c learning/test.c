

#include <stdio.h>
#include <stdbool.h>

// Функция для подсчета длины строки
size_t my_strlen(const char *str) {
    size_t length = 0;
    while (*str++) {
        length++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Введите строку для проверки на палиндром: ");
    fgets(str, sizeof(str), stdin);



   bool isPalindrome = true;
    for (size_t i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        printf("Строка является палиндромом.\n");
    } else {
        printf("Строка не является палиндромом.\n");
    }

    return 0;
}