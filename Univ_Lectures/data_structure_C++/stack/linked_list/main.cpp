#include "stackL.h"
#include <iostream>
using namespace std;

int main() {
    stackList a;
    a.AddLast(10);
    a.Print();
    a.AddLast(20);
    a.Print();
    a.AddLast(30);
    a.Print();
    a.RemoveLast();
    a.Print();
}