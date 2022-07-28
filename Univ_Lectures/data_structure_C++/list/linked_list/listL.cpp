#include "listL.h"

#include <iostream>
using namespace std;

listList::listList() {
    Count = 0;
    Head = NULL;
}

listList::listList(const listList& L) {
    this->Count = L.Count;
}

listList::~listList() {}

void listList::Insert(int Position, int Item) {
    if ((Position < 0) || (Position > Count))
        cout << "Wrong Position\n";
    else {
        Nptr temp = Head;
        for (int i = 0; i < Position; i++)
            temp = temp->Next;

        Nptr p;
        p->Data = Item;
        p->Next = temp->Next;
        temp->Next = p;

        if (Position == 0)
            Head = p;

        Count++;
    }
}
void listList::Delete(int Position) {}
void listList::Retrieve(int Position, int& Item) {}
bool listList::IsEmpty() {}
int listList::Length() {}
void listList::Print() {
    cout << "Count : " << Count << '\n';
    Nptr temp = Head;
    for (int i = 0; i < Count; i++) {
        temp = temp->Next;
        cout << "Pos." << i << " : " << temp->Data << '\n';
    }
}