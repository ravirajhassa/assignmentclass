#include"header.h"
int swap()
{
	int a, b, c=0;
	cout << "enter the value of a,b,c"<<endl;
	cin >> a >> b >> c;
	c = c * 0;
	c = a;
	a = b;
	b = c;
	cout << a<<endl << b<<endl<<c;
	return 0;

}