#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        
        if (isalpha(ch)) { // Проверяем, является ли символ буквой
            if (ch == 'a' || ch == 'e' || ch == 'i' || 
                ch == 'o' || ch == 'u') {
                vowels++; // Увеличиваем счетчик гласных
            } else {
                consonants++; // Увеличиваем счетчик согласных
            }
        }
    }
    
    printf("Количество гласных: %d\n", vowels);
    printf("Количество согласных: %d\n", consonants);
    
    return 0;
}
