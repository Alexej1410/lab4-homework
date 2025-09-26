#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	puts("вариант 14\n");
	puts("введите параметр а");
	scanf("%d", &a);
	puts("введите параметр b");
	scanf("%d", &b);
	puts("введите параметр c");
	scanf("%d", &c);
	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		puts("Система калибровки станка: успешная калибровка");
	else puts("Система калибровки станка: калибровка не пройдена");
}