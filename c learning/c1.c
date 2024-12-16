#include<stdio.h>

int main() {
    char str[100];
    printf("введите строку для реверса: ");
    scanf("%99s",str);

    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);

    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    int i;
    for (i = 0; i<len/2;i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("строка наоборот: ");
    printf("%s\n",str);
    str[i] = '\0';
    return 0;
}