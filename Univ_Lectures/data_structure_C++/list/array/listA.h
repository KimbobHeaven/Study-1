class listArray {
public:
	listArray();
	listArray(const listArray& L);
	~listArray();

	void Insert(int Position, int Item);
	void Delete(int Position);
	void Retrieve(int Position, int& Item);
	bool IsEmpty();
	int Length();

private:
	int Count;
	int Data[MAX];
};
