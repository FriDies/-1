#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void name();
void date();
void draw_boat();
int main()
{
    setlocale(LC_CTYPE, "");
    name();
    date();
    draw_boat();
    return 0;
 }
void name()
{
    puts("*******************************************");
    puts("*                                         *");
    puts("* тема: Разработка консольного приложения *");
    puts("*                                         *");
    puts("*     Выполнил Потапов Е.С.               *");
    puts("*                                         *");
    puts("*******************************************");
}

void date()
{
    puts("  _    _  _    _   _");
    puts("|  |  | |  |  | | |_|");
    puts("|  |  |_|  |  |_| |_|");
}

void draw_boat()
{
    puts("          |\\ ");
    puts("          | \\ ");
    puts("          |  \\ ");
    puts("          |   \\ ");
    puts("     _____|____\\_____");
    puts("     \\              / ");
    puts("      \\____________/");
}