#include "biSrchTree.h"
#include <iostream>
using namespace std;

const char SPACE[] = "   ";

BST::BST() {
    Leaf = NULL;
}

BST::BST(const BST& B) {

}

BST::~BST() {

}

Nptr BST::Search(Nptr T, int Key) {

}

Nptr BST::Insert(Nptr T, int Key) {
    if (T == NULL) {
        Nptr p = new node;
        p->Data.Key = Key;
        p->LChild = NULL;
        p->RChild = NULL;
    }
    else {
        if (T->Data.Key > Key)
            Insert(T->LChild, Key);
        else
            Insert(T->RChild, Key);
    }
}

Nptr BST::Delete(Nptr T, int Key) {

}

void BST::Traverse(Nptr T) {

}

void BST::Print(Nptr T, int Lvl = 0) {
    if (T != NULL) {
        for (int i = 0; i < Lvl; i++)
            cout << SPACE;
        cout.width(3);
        cout << T->Data.Key << '\n';

        Print(T->RChild, Lvl + 1);
        Print(T->LChild, Lvl + 1);
    }
}