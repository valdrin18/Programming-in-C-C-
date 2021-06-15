#ifndef VECTOR_H
#define VECTOR_H

using namespace std;
//class vector
class Vector {
//private and public data
private:
    int size;
    double *ptr;
public:
    //cons,desc,copy,setter,getter,other funcs
    Vector();
    Vector(double*);
    Vector(const Vector&);
    ~Vector();
    void printV();
    void setEle(double*);
    void setSize(int);
    void getEle(double*);
    Vector difference(const Vector&);
    double product(const Vector&);
    Vector addE(const Vector&);
    double norm();

};

#endif // VECTOR_H
