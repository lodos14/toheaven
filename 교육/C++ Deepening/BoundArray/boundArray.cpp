#include"boundArray.h"
#include"invalidindex.h"



BoundArray::BoundArray(int low, int size) 

	:SafeArray(size - low) {low_=low;
	

}

const int BoundArray::BoundArray::lower() const{

	return low_;

}

const int BoundArray::BoundArray::upper() const {


	return low_ + this->Array::size_;

}

int& BoundArray::operator[](int index) {
	
	if (index < low_ || index >= upper())
		throw InvalidIndex(index);
	return this->Array::operator[](index - low_);
}
const int& BoundArray::operator[](int index) const {
	if (index < low_ || index >= upper())
		throw InvalidIndex(index);
	return this->Array::operator[](index - low_);
}

