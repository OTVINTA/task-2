#include <iostream>

 using namespace std;

<<<<<<< HEAD
int main(int argc, char *argv[])
{
    cout << "Hello, World!\n";
    cout << "Number of argument: " << argc << endl;
=======
 class Base
 {
 public:
     Base() { cout << "Construct Base object\n"; }
     ~Base() { cout << "Destruct Base object\n"; }
>>>>>>> origin/task1-v1

     virtual void func() const { cout << "Function func() of class Base\n"; }
 };

 class Child: public Base
 {
 public:
     Child() { cout << "Construct Child object\n"; }
     ~Child() { cout << "Destruct Child object\n"; }

     void func() const { cout << "Function func() of class Child\n"; }
 };

 void Function(const Base &obj)
 {
     cout << "* Call method func() for object obj" << endl;
     obj.func();
 }

 int main(int argc, char *argv[])
 {
     cout << "* Create Object base" << endl;
     Base base;

     cout << "* Create Object child" << endl;
     Child child;

     cout << "* Call method func() for object base" << endl;
     Function(base);

     cout << "* Call method func() for object child" << endl;
     Function(child);

     return 0;
 }