#include "stackL.h"
#include <iostream>
using namespace std;

stackList::stackList() {
    Count = 0;
    Head = NULL;
}

stackList::stackList(const stackList& S) {
    this->Count = S.Count;
    
}

stackList::~stackList() {

}

void stackList::AddLast(int Item) {
    Nptr p = new node;
    p->Data = Item;
    p->Next = NULL;

    if (Count == 0) {
        Head = p;
    }
    else {
        Nptr temp = Head;
        while (temp->Next != NULL)
            temp = temp->Next;
        temp->Next = p; 
    }
    
    Count++;
}

void stackList::RemoveLast() {
    if (Count == 0)
        cout << "List Empty\n";
    else {
        Nptr temp = Head, p;
        while (temp->Next->Next != NULL)
            temp = temp->Next;
        p = temp->Next;
        temp->Next = NULL;
        
        delete p;
        Count--;
    }
}

void stackList::RetrieveLast(int& Item) {
    Nptr temp = Head;
    while (temp->Next != NULL)
        temp = temp->Next;
    Item = temp->Data;
}

bool stackList::IsEmpty() {
    return (Count == 0);
}

int stackList::Length() {
    return Count;
}

void stackList::Print() {
    cout << "Count : " << Count << '\n';
    
    Nptr temp = Head;
    for (int i = 0; i < Count; i++) {
        cout << "Pos." << i << " : " << temp->Data << '\n';
        temp = temp->Next;
    }
    cout << '\n';
}