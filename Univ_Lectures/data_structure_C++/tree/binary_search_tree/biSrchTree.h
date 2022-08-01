typedef struct dataRecord {
    int Key;
} dataType;
    
typedef struct treeRecord {
    dataType Data;
    struct treeRecord* LChild;
    struct treeRecord* RChild;
} node;

typedef node* Nptr;

class BST {
    public:
    BST();
    BST(const BST& B);
    ~BST();
    
    Nptr Search(Nptr T, int Key);
    Nptr Insert(Nptr T, int Key);
    Nptr Delete(Nptr T, int Key);

    void Traverse(Nptr T);
    void Print(Nptr T, int Lvl = 0);

    private:
    Nptr Leaf;
};