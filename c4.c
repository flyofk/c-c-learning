#include <stdio.h>

int find_first_occurrence(const char *str, char ch) {
    for (int i = 0; str[i] != '0'; i++) {
        if (str[i] == ch) {
            return i; // Возвращаем индекс первого вхождения
        }
    }
    return -1; // Если символ не найден, возвращаем -1
}

int main() {
    const char *my_string = "Hello, World!";
    char character_to_find = 'l';
    
    int index = find_first_occurrence(my_string, character_to_find);
    
    if (index != -1) {
        printf("Первое вхождение символа '%c' найдено на индексе: %d\n", character_to_find, index);
    } else {
        printf("Символ '%c' не найден в строке.\n", character_to_find);
    }

    return 0;
}
