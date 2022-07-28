#include <iostream>
#include "listA.h"
using namespace std;

listArray::listArray() {
	Count = 0;
}

llistArray::istArray(const listArray& L) {
	this->Count = L.Count;
	for (int i = 0; i < this->Count, i++) {
		this->Data[i] = L.Data[i];
	}
}

listArray::~listArray() {}

void listArray::Insert(int Position, int Item);
void listArray::Delete(int Position);
void listArray::Retrieve(int Position, int& Item);
bool listArray::IsEmpty();
int listArray::Length();

"test string"