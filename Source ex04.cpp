//
//Marnie Rimes
//HW04 ex04
//Liang 11.9

#include<iostream>
#include"Rectangle2D.h"
using namespace std;

int main()
{
	Rectangle2D* r1 = new Rectangle2D(2, 2, 5.5, 4.9);
	Rectangle2D* r2 = new Rectangle2D(4, 5, 10.5, 3.2);
	Rectangle2D* r3 = new Rectangle2D(3, 5, 2.3, 5.4);
	
	cout << "The area for r1 is " << r1->getArea() << " and the perimeter is " << r1->getPerimeter();
	cout << r1->contains(3, 3) << " " << r1->contains(r2) << " " << r1->overlaps(r3);
}