#pragma once



class Array {

public:


	//Array();
	explicit Array(int size = ARRAY_SIZE);   // // Array arr2 = 10; 이걸 막아줌  
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

protected:   // 자식에서 프라이빗에 접근할 수 있게함
	int size_;
	static const int ARRAY_SIZE = 100;


};
