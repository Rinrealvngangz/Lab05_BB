#include<iostream>
#include<conio.h>
#include <math.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"






void chaychuongtrinh();

int main()
{

	chaychuongtrinh();
	return 0;
}

void chaychuongtrinh()
{
	int menu;
	int somenu;
	somenu = 6;
	int n = 0;
	DaySo a;
	
	cout << " nhap so nguyen duong n : = ";
	cin >> n;
	nhapmang(a, n);
	do
	{

		menu = chonchucnang(somenu);
		xulimenu(menu, a,n);
	} while (menu > 0);
	_getch();
}
