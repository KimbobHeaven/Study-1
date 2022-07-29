#include "stackA.h"
#include <iostream>
using namespace std;

stackArray::stackArray() {
    Count = 0;
}

stackArray::stackArray(const stackArray& S) {

}

stackArray::~stackArray() {}

void stackArray::AddLast(int Item) {
    if (Count == MAX)
        cout << "Array Full\n";
    else {
        Data[Count] = Item;
        Count++;
    }
}

void stackArray::RemoveLast(int Item) {
    if (Count == 0)
        cout << "Array Empty\n";
    else
        Count--;
}

bool stackArray::IsEmpty() {
    return (Count == 0);
}

int stackArray::Length() {
    return Count;
}

void stackArray::Print() {
    cout << "Count : " << Count << '\n';
    for (int i = 0; i < Count; i++)
        cout << "Pos." << i << " : " << Data[i] << '\n';
}