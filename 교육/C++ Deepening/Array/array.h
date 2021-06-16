#pragma once



class Array {

public:


	//Array();
	explicit Array(int size = ARRAY_SIZE);   // // Array arr2 = 10; ¿Ã∞… ∏∑æ∆¡‹  
	Array(const int* pArr, int size);
	Array(const Array& rhs);
	~Array();

	Array& operator=(const Array& rhs);

	bool operator==(const Array& rhs);


	int& operator[](int index);

	const int& operator[](int index)const;

	int size() const;

private:
	int* pArr_;
	
	static const int ARRAY_SIZE = 100;    

	
	int size_;


};
