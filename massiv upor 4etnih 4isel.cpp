// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.


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
	const int N = 5;
		int i(0),j(0),t(0),n(0);
		int a[N] = { 0};
		int b[N] = { 0 };
		srand(time(NULL));
		for (i = 0; i<N; i++)
		{
			a[i] = rand() % 10;
			printf("\n\t A= %d", a[i]);
			if ((a[i] % 2) == 0){ b[i] = a[i];}
			else { b[i] = 0;}
		}
		for (j = 0; j < N - 1; j++)
		{
			for (i = 0; i < N - 1 - j; i++)
			{
				if (b[i] == 0){ b[i] = b[i + 1]; b[i + 1] = 0;}
				else { ; }
			}
		}
		for (j = 0; j < N - 1; j++)
		{
			for (i = 0; i < N - 1 - j; i++)
			{
				if ((b[i] != 0) && (b[i]>b[i + 1])&&(b[i+1]!=0)){ t = b[i]; b[i] = b[i + 1]; b[i + 1] = t; }
				else { ; }
			}
		}
		for (i = 0,j=0; i<N; i++)
		{
			if (((a[i] % 2) == 0)&&(a[i]!=0)){ a[i] = b[j]; j++; }
			else { ; }
		}
		for (i = 0; i < N; i++)
		{
			printf("\n\t B= %d", b[i]);
		}
		for (i = 0; i < N; i++)
		{
			printf("\n\t a1= %d", a[i]);
		}
		_getch();
		return 0;
}
