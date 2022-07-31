#include "dequeL.h"
#include <iostream>
using namespace std;

dequeList::dequeList() {}

dequeList::dequeList(const dequeList& D) {
    L = D.L;
}

dequeList::~dequeList() {}

void dequeList::InsertFirst(int Item) {
    L.Insert(0, Item);
}

void dequeList::InsertLast(int Item) {
    L.Insert(L.Length(), Item);
}

void dequeList::DeleteFirst() {
    L.Delete(0);
}

void dequeList::DeleteLast() {
    L.Delete(L.Length() - 1);
}

void dequeList::Retrieve(int Position, int& Item) {
    L.Retrieve(Position, Item);
}

bool dequeList::IsEmpty() {
    return L.IsEmpty();
}

int dequeList::Length() {
    return L.Length();
}

void dequeList::Print() {
    L.Print();
}