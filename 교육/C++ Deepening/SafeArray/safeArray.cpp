#include"safeArray.h"
#include"array.h"
#include<cassert>



SafeArray::SafeArray(int size )
: Array(size)
{



}
SafeArray::SafeArray(const int* pArr, int size)
	:Array(pArr, size)
{



}

//SafeArray::SafeArray(const SafeArray& rhs)
//	:Array((Array)rhs)    // slicing
//{
//
//
//
//}
//SafeArray::~SafeArray() {
//
//
//
//}


int& SafeArray::operator[](int index) {

	assert(index >= 0 && index < this->Array::size_);
	return this->Array::operator[](index);

}

const int& SafeArray::operator[](int index)const {

	assert(index >= 0 && index <= this->Array::size_);
	return this->Array::operator[](index);

}

