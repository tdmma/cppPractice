// cppPractice.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "cppPractice.h"

int _tmain(int argc, _TCHAR* argv[])
{
    Base b;
    Derived d;
    Base* pb = new Derived2;
    // ----------------------------------- //
    b.a(1);                              // Base::a(double)
    d.a(1);                              // Derived::a(complex)
    pb->a(1);                            // Base::a(double), This is redefine the Base::a() function
    pb->b(2);
    // pb->a(complex<double>(1.0, 2.0));   // clear the annotation and have a try
    // ----------------------------------- //
   // b.b(10);                               // Base::b(int)
   // d.b(10);                               // Derived::b(int)
   // pb->b(10);                             // Derived::b(int), This is the virtual function
    // ----------------------------------- //
    delete pb;


	return 0;
}

