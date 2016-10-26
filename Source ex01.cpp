//
// Marnie Rimes
// CS 172 HW04 
// ex_01 Liang 11.1 Analyze input
// 10-20-16
//

#include<iostream>
using namespace std;

//function calculates average of array
double calcAverage(int* num, int size)
{
	//initializing sum to 0
	int sum = 0;
	//adding up sum of values of array
	for (int* p = num; p < num + size; num++)
	{
		sum += *p;
	}
	//calculate average
	double average = sum % size;
	return average;
}

//checks if a number is above average
int aboveAverage(int* array, int size)
{
	//initializes count of numbers to zero
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		//compares array value to average value
		if (array[i] >= calcAverage(array, size))
		{
			//increments number of values above average
			count++;
		}
			
	}
	return count;
}


int main()
{
	//integer for array size
	int num = 5;
	int* size = &num;
	//reading number into array
	int* numbers = new int[size];
	numbers[size] = { 1, 2, 3 , 4, 5 };
	
	//outputs average of the values in the array
	cout << "The average is " << calcAverage(numbers, 5) << endl;
	//outputs how many numbers are above
	cout << "There are " << aboveAverage(numbers, 5) << " numbers above average.\n";
	//deletes the array
	delete[] numbers;
}