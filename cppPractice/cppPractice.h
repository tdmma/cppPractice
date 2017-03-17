#ifndef PRACTICE_H
#define PRACTICE_H

#include <iostream>
#include <complex>
using namespace std;

class Base
{
public:
   // Base(){ cout << "base" << endl; }
  //  virtual  ~Base(){ cout << "base xigou" << endl; }
    virtual void a(int x)    { cout << "Base::a(int)" << endl; }
    // overload the Base::a(int) function
    virtual void a(double x) { cout << "Base::a(double)" << endl; }
    virtual void b(int x)    { cout << "Base::b(int)" << endl; }
    void c(int x)            { cout << "Base::c(int)" << endl; }
};

class Derived : public Base
{
public:
  //  Derived(){ cout << "Derived" << endl; }
  //  ~Derived(){ cout << "Derived xigou" << endl; }
    // redefine the Base::a() function
    void a(complex<double> x)   { cout << "Derived::a(complex)" << endl; }
    // override the Base::b(int) function
    void b(int x)               { cout << "Derived::b(int)" << endl; }
    // redefine the Base::c() function
    void c(int x)               { cout << "Derived::c(int)" << endl; }
    void d(int x)                { cout << "derived:c(int)" << endl; }
};

class Derived2 :public Derived
{
public:
    void a(char c)   { cout << "Derived2::c(char)" << endl; }
};









#endif