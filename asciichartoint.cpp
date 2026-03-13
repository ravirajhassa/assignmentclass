//4.Write a C++ program to print ASCII value of a given characters : A , E , I , O , U.
#include"header.h"
int ascii()
{
	char raj[5] = { 'A','E','I','O','U'};

	for (int i = 0; i < 5; i++)
	{
		cout << "ascii value " << raj[i] << "=" << int(raj[i]) << endl;
	}for (int i = 0; i < 5; i++)
	{
		cout << "\nascii value " << raj[i] << "=" << int(raj[i])+10 ;
	}
	return 983;

}