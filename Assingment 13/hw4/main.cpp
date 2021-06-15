/* CH-230-A
  A13.4(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  void setX(int i) {x = i;}
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B()  { setX(10); }
};

class C: virtual public A
{
public:
  C()  { setX(20); }
};

class D: public B, public C {
};

int main()
{
    D d;
    d.print();
    return 0;
}
/*
~~~Explanation~~~

Error: request for member 'print' is ambiguous

Reason/Solution:
The reason why we get this is because class D is trying to get info indirectly from class
A because if we look, class D is public only of class B and C so not directly connected to A
Therefore, for us it comes in handy to put virtual before class B and C when they are declared
as public classes of A (inheritance) in order to make class D connect and access data from class A
also known as mother class.

Result:
The result printed will be 20 since it gets the last modified change applied, in this case
from class C which did set variable x to 20
*/
