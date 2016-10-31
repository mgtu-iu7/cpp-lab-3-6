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
	
	int i(0), j(0), t(0), n(0), n1(0);


	for (i = 0; i<90; i++)
	{
		t = (pow(8,i))%79
		printf("\n\t  %d", t);
	}
	
	_getch();
	return 0;
}
