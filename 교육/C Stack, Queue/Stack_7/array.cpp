#include"array.h"
#include<cassert>

const int Array::ARRAY_SIZE ;

//Array::Array() {
//
//	pArr_ = new int[100];
//	assert(pArr_);
//
//	size_ = 100;
//
//}

Array::Array(int size) {

	pArr_ = new int[size];
	assert(pArr_);

	size_ = size;

}

Array::Array(const int* pArr, int size) {

	pArr_ = new int[size];
	assert(pArr);
	for (int i = 0; i < size; ++i)
		pArr_[i] = pArr[i];
	size_ = size;


}

Array::Array(const Array& rhs) {


	pArr_ = new int[rhs.size_];
	assert(pArr_);
	for (int i = 0; i < rhs.size_; ++i)
		pArr_[i] = rhs.pArr_[i];
	size_ = rhs.size_;




}

Array::~Array() {

	delete[] pArr_;

}



Array& Array::operator=(const Array& rhs) {

	if (this != &rhs) {
		delete[] pArr_;

		pArr_ = new int[rhs.size_];
		assert(pArr_);
		for (int i = 0; i < rhs.size_; ++i)
			pArr_[i] = rhs.pArr_[i];
		size_ = rhs.size_;
	}
	return *this;
}

bool Array::operator==(const Array& rhs) {

	if (size_ != rhs.size_)
		return false;

	int i;
	for (i = 0; i < rhs.size_; ++i) {
		if (pArr_[i] != rhs.pArr_[i])
			break;
	}
	return (i == rhs.size_);

}


int& Array::operator[](int index) {

	return pArr_[index];

}

const int& Array::operator[](int index)const {


	return pArr_[index];

}

int Array::size() const {


	return size_;

}
