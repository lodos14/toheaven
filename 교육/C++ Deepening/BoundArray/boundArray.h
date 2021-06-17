#pragma once
#include"safeArray.h"

class BoundArray :public SafeArray {

public:

	explicit BoundArray(int low, int size);

	virtual int& operator[](int index);
	virtual const int& operator[](int index) const;

	const int lower() const;
	const int upper() const;

	virtual~BoundArray() {}

private:

	int low_;
	



};
