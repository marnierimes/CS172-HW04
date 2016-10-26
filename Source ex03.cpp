//
//Marnie Rimes
//HW04 ex03
//Liang 11.5
//

#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	//initialized array of integers
	int numbers[] = { 1, 2, 4, 5, 10, 100, 2, -22 };
	
	//specific function for arrays for finding a minimun
	int* smallestElement = min_element(numbers, numbers + 8);
	
	//outputs the smallest element
	cout << "The smallest element is " << *smallestElement << endl;

}