// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.


#include "stdafx.h"
#include <math.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

void gamecycle(int x0, int y0)
{
	int e(100), n(0), x1(0), y1(0), x(0), y(0);
	float l(0), perem(0), lx(0), ly(0), u1(120);
	char choice(0);
	while (e > 0)//цикл на 100 попыток
	{
		const char KEY1 = '1', KEY2 = '2', KEY3 = '3';
		x1 = x0 + 1000;
		y1 = y0 + 1000;
		e = e--;
		do //цикл выбора
		{
			printf("\n 1: Выйти\n");
			printf("\n 2: Начать заного (сброс попыток и цели)\n");
			printf("\n 3: Продолжить\n");
			choice = _getch();
		} while (!strchr("123", choice));
		if (choice == KEY1) { exit(0); }
		if (choice == KEY2) { break; }
		if (choice == KEY3) { ; }
		printf("\n\t\t\t popitok ewe: %d", e);
		printf("\n\t\t\t Vvodi x i y 4erez probel, dlya sbrosa vvedi  < 0\n");//начало цикла сканирования ввода
		scanf_s("%d %d", &x, &y);
		lx = x0 + 500 - x;
		ly = y0 + 500 - y;
		l = sqrt(pow(lx, 2) + pow(ly, 2));
		if ((x <= x1) && (x >= x0) && (y <= y1) && (y >= y0))
		{
			printf("\n\t Молодец, попал!");
		}
		else
		{
			if (perem == 0)
			{
				printf("\n\t Не попал");
				perem = l;
			}
			else if (l > perem)
			{
				printf("\n\t Вы удаляетесь от цели");
				perem = l;
			}
			else
			{
				printf("\n\t Вы приближаетесь к цели");
				perem = l;
			}
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	int w(120);
	do// основной цикл программы
	{
		printf("в первом цикле");
		int e(0), n(0), x0(0), y0(0), i(0);
		srand(time(NULL));
		x0 = abs(rand());
		y0 = abs(rand());
		gamecycle(x0, y0);
	} while (w!=0);
	printf("вышел из цикла");
	_getch();
	return 0;
}

