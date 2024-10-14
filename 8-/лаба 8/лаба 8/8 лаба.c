#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()

{

	setlocale(LC_CTYPE, "RUS");
	int pupu;
	int start;
	printf("введите");
	scanf("% d", &pupu);
	for (start = 1; start <= pupu; start+=1) putchar('*');
	{
		if (start == 1)printf("+");
		if (start%2==0)printf("!");
	}
	
}