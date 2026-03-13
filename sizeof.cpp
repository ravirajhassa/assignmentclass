//3.C++ Program to Find the Size of int, float, double, and char

#include"header.h"
int size()
{
	cout << "size of int = " << sizeof(int) << " bytes";
	cout << "\nsize of float = " << sizeof(float) << " bytes";
	cout << "\nsize of double = " << sizeof(double) << " bytes";
	cout << "\nsize of long double = " << sizeof(long double) << " bytes"; //long double size 8 / 12 / 16 bytes(depends on system)

	cout << "\nsize of char = " << sizeof(char) << " bytes";


	(void)_getch();
	return 0;
}