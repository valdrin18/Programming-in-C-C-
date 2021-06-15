/* CH-230-A
  A12.p7(Cpp)
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
#include <ctime>

const int num_obj = 25;
//define the colors which are going to be randomly chosen
const char* colors[] = {"RED", "GREEN", "BLUE", "YELLOW"};


int main() {
    double sum_area = 0.0;
    double sum_perimeter = 0.0;
    Area *list[num_obj];
    int index = 0;
    int counter = 0;

    srand(time(NULL));

    while (counter < num_obj) {
        int chooseShape = rand() % 4;
        const char* color = colors[rand() % 4];

        //choose sizes of the shapes from 5 to 100
        double size1 = (rand() % 96) + 5;
        double size2 = (rand() % 96) + 5;

        //4 shapes in total (create if clauses)
        if(chooseShape == 0) {
            list[counter] = new Circle(color, size1);
        }
        else if(chooseShape == 1) {
            list[counter] = new Ring(color, size1, size2);
        }
        else if(chooseShape == 2) {
            list[counter] = new Rectangle(color, size1, size2);
        }
        else if(chooseShape == 3) {
            list[counter] = new Square(color, size1);
        }
        counter++;
    }

    //calculate area and perimeter
    while (index < num_obj) {
        (list[index])->getColor();
        double perimeter = list[index]->calcPerimeter();
        cout << perimeter;

        (list[index])->getColor();
        double area = list[index++]->calcArea();
        cout << area << endl;
        sum_area += area;
        sum_perimeter += perimeter;

    }
    //print the total area and perimeter
    cout << "Total area is " << sum_area << endl;
    cout << "Total perimeter is " << sum_perimeter << endl;

    return 0;
}
