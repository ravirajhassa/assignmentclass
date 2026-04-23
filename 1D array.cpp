#include"header.h"

/* {
	int marks[5] = {10,20,30,40,50};
	int i;
	for (i = 0; i < 5; i++)
	{
		cout << "Enter marks of student " << i + 1;
		cout << marks[i] << endl;
	}
	return 1;
}*/

int array1d()
{
	int marks[50];
	int n;
	

	cout << "Enter length of array: ";
	cin >> n;
	
	int i;
	cout << "enter the jelements of array: " << endl;
	for (i = 0; i < n; i++)
	{
		cin>> marks[i];
	}
	cout << "The elements of array are: ";
	for (i = 0; i < n; i++)
	 {
		cout << marks[i]<< endl;		
	
	 }
	
	return 0;
}