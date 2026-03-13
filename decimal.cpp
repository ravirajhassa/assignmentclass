//1.	Write a C++  program to print : 32.4485 with integer, float and double datatype.
#include"header.h"
int decimal()

{
	int a= 324485;
	float b;
	double c;
	cout << "\n\tyou can check by putting any decimal number"<<endl;
	cout << "\n\n\tenter your interger number a= ";
	double z = a / 10000.0;
	cout << "\n\tyour number is = "<<z<<endl;
	cout << "\n\tenter your float number b= ";
	cin >> b;
	cout << "\n\tyour number is = "<<b<<endl;
	cout << "\n\tenter your double number c= ";
	cin >> c;
	cout << "\n\tyour number is = "<<c;
	return 0;
}