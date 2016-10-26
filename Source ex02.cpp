//
//Marnie Rimes
//HW04 ex02
//Liang 11.3

#include<iostream>
using namespace std;

//function for doubling the size of the parameter list
int* doubleCapacity(const int* list, int size)
{
	//creating new list that is larger
	int* newList = new int[size * 2];
	for(int i = 0; i < size; i++)
	{
		//setting the old list to the new
		newList[i] = list[i];
	}
	//deleted memory of list
	delete [] list;
	return newList;
}
//function to output given array
void outputArray(int* list, int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << list[i] << " ";
	}
	cout << endl;
}


int main()
{
	//creating new array
	int* list = new int[5];
	//initializing new array
	for (int i = 0; i < 5; i++)
	{
		list[i] = 17;
	}
	//outputting first array
	outputArray(list, 5);
	//calling the function to double the list parameter
	list = doubleCapacity(list, 5);
	//outputting the array again
	outputArray(list, 5);
	//delete memory of the array
	delete[] list;
}