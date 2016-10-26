/
// Marnie Rimes
// CS 172 HW04 
// ex_01 Liang 11.1 Analyze input
// 10-20-16
//

#include<iostream>
using namespace std;

double calcAverage(int* array, int size)
{
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		sum += array[i];
	}
	double average = sum % size;
	return average;
}

int aboveAverage(int* array, int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (array[i] >= i); // somehow do average
	}
	return count;
}

//implement allocate array function


int main()
{
	int size;
	cout << "Enter the size ";
	cin >> size;
	int* array = new int[size];
	for (int i = 0; i < size; i++)
	{
		cout << "Enter a value for the array ";
		cin >> array[i];
	}


	cout << "The average is " << calcAverage(array, size);

}