//8 лаба
#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	int start;
	printf("Введите символ");
	scanf("% d", start);
	for (start; start <= 10; start++) putchar('*');

}