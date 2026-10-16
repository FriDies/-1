#include <locale.h>
int main()
{
	setlocale(LC_CTYPE, "RUS");
	puts("Нажмите Enter для продолжения...");
	getchar();
	puts("Продолжение программы");
	return 0;
}
