#include "oop.h"
#include <iostream>

void Function(const Base &obj)
{
    cout << "* Call method func() for object obj" << endl;
    obj.func();
}
