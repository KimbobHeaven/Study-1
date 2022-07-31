#include "dequeL.h"
#include <iostream>
using namespace std;

int main() {
    dequeList a;
    a.InsertFirst(10);
    a.InsertFirst(0);
    a.InsertLast(20);
    cout << "A\n";
    a.Print();

    dequeList b(a);
    cout << "B\n";
    b.Print();

    a.DeleteFirst();
    cout << "B.2\n";
    b.Print();
}