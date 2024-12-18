#include <stdio.h>
#include <stdbool.h>

int main(){
    char str[100]; 
    printf("Введите строку для проверки на палиндром ");
    scanf("%99s",str);
    
    int len = 0;
    int i;
    int first_str;
    int second_str;
    while (str[len]!='\n' && str[len]!='\0')
    {
        len++;
    }

    for(i = 0; i<len/2;i++){
        str[i] = first_str;
        str[len-i-1] = second_str;
        if (first_str!= second_str){
            break;
        }


    




    }
    if (first_str == second_str){
            printf("строка %s является палиндромом",str);
        }
        else{
            printf("строка %s не является палиндромом",str);

        }

    
}
