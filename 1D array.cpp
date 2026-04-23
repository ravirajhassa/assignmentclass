#include"header.h"
//int array1d()


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



	/*
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
*/
/*int arr2d()
{
	int arr[5][4] = { 1,3,3,2,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19 };
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
		
	}
	return 0;
}*/

int arr2d()
{
	int arr[5][4];
	int i, j;
	cout << "Enter the elements of array: " << endl;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			cin >> arr[i][j];

		}
	}
	for (i = 0; i < 5; i++)
	{
		for(j=0;j<4;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}

