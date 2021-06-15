/* CH-230-A
  A13.5(Cpp)
 Valdrin Smakaj
Vsmakaj@jacobs-university.de
*/

#include<iostream>
using namespace std;

class A
{
  int x;
public:
  A(int i) { x = i; }
  void print() { cout << x; }
};

class B: virtual public A
{
public:
  B():A(10) {  }
};

class C:  virtual public A
{
public:
  C():A(10) {  }
};

class D: public B, public C {
    public:
    D():A(10){}
};

int main()
{
    D d;
    d.print();
    return 0;
}

/*
~~~Explanation~~~

Error: use of deleted function 'D::D()'

Reason/Solution:
The reason for this error is, we cannot call a constructor directly
We could before, previously because it was done with a setter (void-type function)
So to fix it, we simply imply the call of the constructor of A in the D class as a
public construct and add the value 10 inside, this makes an empty constructor of class D.
This way, it will make it work and the code will terminate. Otherwise,
If we don't do it in public, we will not be able to directly access it from main function.

Result:
As called by constructor we will get value 10.
*/
