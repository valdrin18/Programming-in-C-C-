/* CH-230-A
  A9.7(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/


#include <iostream>

using namespace std;

//swapping function for intergers
void swapping(int &x,int &y) {
    int z = x;
    x = y;
    y = z;
} // swap ints

//swapping function for floats
void swapping(float &x,float &y) {
    float z = x;
    x = y;
    y = z;

} // swap floats

//swapping function for chars using pointers.
void swapping( const char* &x ,const char* &y) {
    const char *z = x;
    x = y;
    y = z;
}// swap char pointers

//main function, used three types of data and swapped them.
//calling swap functions defined above
int main(void) {
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);
    cout << "a=" << a << ", b=" << b << endl;
    cout << "x=" << x << ", y=" << y << endl;
    cout << "str1=" << str1 << ", str2=" << str2 << endl;
    return 0;
}
