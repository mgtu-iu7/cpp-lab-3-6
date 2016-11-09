#include "stdafx.h"
#include <math.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "Russian");
	const int R = 10;
	int i(0), j(0), m(0), t(0), d(0);
	int a[R][R] = { 0 };
	srand((unsigned)time(NULL));
	printf("\n\t Массив случайных чисел:");
	for (i = 0; i<R; i++)
	{
		printf("\n\t\t");
		for (j = 0; j<R; j++)
		{
		 a[i][j] = rand() % 10;
		 printf(" %d", a[i][j]);
		}
	}
        do {
		    d = 0;
		    for (j = 0; j < R; j++)
		    {
			  for (m = 0; m < R - 1; m++)
			  {
				 for (i = 0; i<R - 1 - m; i++)
				 {
					if (a[i][j]>a[i + 1][j])
					{
						t = a[i][j]; // Сортировка по столбцам
						a[i][j] = a[i + 1][j];
						a[i + 1][j] = t;
						d = 1;
					}
				 }
			  }
			if ((a[R - 1][j]>a[0][j + 1]) && (j <= R - 2))
		        {
			  t = a[R - 1][j]; //сортировка каждого последнего элемента столбца с первым следующего столбца
			  a[R - 1][j] = a[0][j + 1];
		          a[0][j + 1] = t;
			  d = 1;
		         }
		   }
	    } while (d>0);//пока не перестанет сортировать
	      printf("\n\t Упорядоченный массив:\n\t");
	      for (i = 0; i<R; i++)
		 {
		   printf("\n\t\t");
		   for (j = 0; j<R; j++) {printf(" %d", a[i][j]);}
		 }
	_getch();
	return 0;
}
