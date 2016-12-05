#include <iostream>
#include "oop.h"
 using namespace std;

 int main(int argc, char *argv[])
 {
     cout << "* Create Object base" << endl;
     Base base;

     cout << "* Create Object child" << endl;
     Child child;

     cout << "* Call method func() for object base" << endl;
     //Function(base);

     cout << "* Call method func() for object child" << endl;
     //Function(child);

     return 0;
 }
