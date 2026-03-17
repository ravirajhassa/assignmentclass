//4.Write a C++ program to print cube of n numbers in tabular format.

//For ex.
// 
//	NUMBER          CUBE

//	1                 1
//	2                 8
//	3				 27

#include"header.h"
int table()
{
	
	int n;
	cout << "enter nun you want a cube\n";
	cin >> n; 
	cout << "\nNUMBER\tCUBE\n";
	for (int i = 1; i <= n; i++)
	{
		int value = (i * i * i);

		cout << i << "\t" << value;  
		cout << endl;
	}
	
	(void)_getch();
	return 0;
}