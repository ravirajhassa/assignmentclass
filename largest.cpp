//1.Write a C++ program to find the largest among three numbers. 
//(ex.Input : a = 45, b = 96, c = 10 | result : b = 96)

#include"header.h"
int largest()
{
	int a , b , c;
	cout << " Enter your all three number "<<endl;
	cin >> a>> b>> c;
	if(a>b&&a>c)
	{
		cout << a<< " = a is largest";

	}
	else if(b>a&&b>c)
	{
		cout << b <<" = b is largest";
	}
	else
	{
		cout << c << " = c is largest";
	}
	return 0;
}
