#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int a, b, c;
	puts("������� 14\n");
	puts("������� �������� �");
	scanf("%d", &a);
	puts("������� �������� b");
	scanf("%d", &b);
	puts("������� �������� c");
	scanf("%d", &c);
	if (a % 3 == 0 && b % 3 == 0 && c % 3 == 0)
		puts("������� ���������� ������: �������� ����������");
	else puts("������� ���������� ������: ���������� �� ��������");
}