#include"header.h"

int rev() 
{
	int num, remainder, reverse = 0;
	cout << "enter your number";
	cin >> num;
	while (num>0)
	{
		remainder = num % 10;
		num = num/10;
		reverse = (reverse * 10) + remainder;
	}
	cout << "reverse number is " << reverse;
	return 0;
}

/* only for output
* 
while(num>0)
{
remainder =num%10;
cout<< remainder<<" ";
num = num/10;
}

*/