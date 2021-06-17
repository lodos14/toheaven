// #pragma once
#ifndef ARRAY_H
#define ARRAY_H
// #define ARRAY_SIZE 100
#include <iostream>

// extern const int ARRAY_SIZE;         // extern������ ����� �ٸ� cpp���� ��밡��
   // ���������ε� Ŭ������ �����ִ°Ÿ� static���� �������,, // Ŭ���� �ȿ� �־���


class Array {

public:
    /*
    Array();
    Array(const Array& rhs);
    ~Array();
    Array& operator=(const Array& rhs);
    Array* operator&();
    const Array* operator&() const;
    */

    //Array();
    explicit Array(int size = ARRAY_SIZE);         // explicit : �������   -> ���������� ����ȯ �Ǵ°��� ����
    Array(const int* pArr, int size);
    Array(const Array& rhs);
    virtual ~Array();

    Array& operator=(const Array& rhs);            // deep-copy�� �ǵ��� �������

    bool operator==(const Array& rhs) const;

    virtual int& operator[](int index);
    virtual const int& operator[](int index) const;

    // get
    int size() const;

private:
    int* pArr_;

protected:
    static const int ARRAY_SIZE;            // static ������� - Ŭ������ ���õ� ��������

    int size_;
};

#endif