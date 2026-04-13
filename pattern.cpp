///
//5.Write a  C++ program to print the following pattern.

//		    1
//		   010
//		  10101

#include"header.h"
int pattern()
{

	int n = 3;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			cout << " ";
		}
		int num = i % 2;  // starting value (1 or 0) 

		for (int k = 1; k <= (2 * i - 1); k++)
		{
			cout << num;
			num = 1 - num; // toggle between 0 and 1
		}

		cout << endl;
	
	}
	return 0;
}