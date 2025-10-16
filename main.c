#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "RUS");
    char symbol;

    printf("Введите знак препинания: ");
    scanf("%c", &symbol);

    switch (symbol)
    {
    case '.':
        printf("Это точка\n");
        break;
    case ',':
        printf("Это запятая\n");
        break;
    case '!':
        printf("Это восклицательный знак\n");
        break;
    case '?':
        printf("Это вопросительный знак\n");
        break;
    case ':':
        printf("Это двоеточие\n");
        break;
    case ';':
        printf("Это точка с запятой\n");
        break;
    case '-':
        printf("Это дефис\n");
        break;
    case '\"':
        printf("Это кавычка\n");
        break;
    case '\'':
        printf("Это апостроф\n");
        break;
    default:
        printf("Это не знак препинания!\n");
        break;
    }

    return 0;
}
