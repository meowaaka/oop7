#include "MyArr.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
    Person<string, int> obj1("Kirill", 17);
    Person<int, string> obj2(17, "Kirill");
    Person<string, string> obj3("Kirill", "programmer");

    obj1.Print();
    obj2.Print();
    obj3.Print();
}