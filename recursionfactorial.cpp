#include"header.h"
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		return(n * factorial(n - 1));
	}
}

int gar()
{
	int factorial(int);
		int value, fact;
	cout << "enter value for value";
	cin >> value;
	fact = factorial(value);
	cout << "\n \n \n the factorial of number: " << fact;
	return 0;
}