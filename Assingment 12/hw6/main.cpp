/* CH-230-A
  A12.p6(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"
// -> Comments at the end of the file...
const int num_obj = 7;
int main() {
	Area *list[num_obj];						// (1)
	int index = 0, i=0;							// (2)
	double sum_area = 0.0, sum_perimeter = 0.0; // (3)
	cout << "Creating Ring: ";
	Ring blue_ring("BLUE", 5, 2);				// (4)
	cout << "Creating Circle: ";
	Circle yellow_circle("YELLOW", 7);
	cout << "Creating Rectangle: ";
	Rectangle green_rectangle("GREEN",5,6);
	cout << "Creating Circle: ";
	Circle red_circle("RED", 8);
	cout << "Creating Rectangle: ";
	Rectangle black_rectangle("BLACK", 10, 20);
	cout << "Creating Ring: ";
	Ring violet_ring("VIOLET", 100, 5);
	cout << "Creating Square: ";
	Square white_square("White", 4);
	list[0] = &blue_ring;                       // (5)
	list[1] = &yellow_circle;
	list[2] = &green_rectangle;
	list[3] = &red_circle;
	list[4] = &black_rectangle;
	list[5] = &violet_ring;
	list[6] = &white_square;
	while (index < num_obj) {		            // (7)
		(list[index])->getColor();	            // (8)
		double area = (list[index++])->calcArea();
		sum_area+=area;
	}
	cout << "\nThe total area is "
			<< sum_area << " units " << endl;	// (9)

	while (i < num_obj) {
		(list[i])->getColor();
		double perimeter = (list[i++])->calcPerimeter();
		sum_perimeter+=perimeter;
	}
	cout << "\nThe total perimeter is "
			<< sum_perimeter << " units " << endl;
	return 0;
}

/* Explanations:
(1) <=> As even name states this does create a list that has pointers
that are used to contain derived classes of class Area.

(2) <=> we declare variables as index and i = 0, for the while loop
to calculate the sum of the areas and later perimeter of all elements of the list.

(3) <=> Sum and perimeter have to be 0 in beginning. after, using the while loop, they are
changed by added more after each element is checked and in the end the have the result for
both of them.

(4) <=> object Ring is created with color blue, outer radius 5, and inner radius 2.

(5) <=> Now the first element of list contains the ring created in the previous step.
moving on the list of pointers will  be filled with these objects as the formula -> (list[i] = &object)
(9) <=> Prints the sum of the areas of all shapes of the list
 and addinng "units" in the output because we dont mention in what metric notation it is.

/* we can represent the diagram as below..

            CLASS (AREA)
            ===========
                ||
        |=======  ========|
        |                 |
        |                 |
   Class(Circle)    Class(Rectangle)
    ===========      ==============
        |                 |
        |                 |
    class (Ring)     class(Square)
     ==========       ===========
*/

