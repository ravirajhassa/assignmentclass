//	A   B   C   D
//	A   B   C
//	A   B
//	A

//  *  *  *  *  *
//	   *  *  *  *
//		  *  *  *
//**         *  *
//*             *
//#include"header.h"
//int abcdloop()
//{
//	int n = 5;
//	for (int i = 1; i <= n; i++)
//	{
//		char ch = 'A';
//
//		for (int j = 1; j <= n+1-i; j++)
//		{
//			cout <<  ch <<" ";
//			ch++;
//		}
//		cout << endl;
//	}
//	return 0;
//}



#include"header.h"
int abcdloop()
{
	int n = 5;
	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= i-1; j++)
		{
			cout << " ";
		}

		for (int j = 1; j <= n+1-i; j++)
		{
			cout << "*";
		}

		cout << endl;
	}
	return 0;
}