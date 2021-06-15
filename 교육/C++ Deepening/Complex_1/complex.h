#pragma once


class Complex {


public:

	//Complex();              // default constructor                         
	//Complex(double re);     // convert constructor
	Complex(double re = 0.0, double im = 0.0);
	Complex(const Complex& rhs);  // copy constructor�� ���ڴ� const Ÿ���� �������
	~Complex();

	Complex& operator=(const Complex& rhs);
	// +=, -=, *=, /=

	Complex& operator+=(const Complex& rhs);


	bool operator == (const Complex & rhs);
	// !=, >, <, >=, <=

	const Complex operator+(const Complex & rhs);
	// -, *, /
	// ++, --
	// etc.

	double real();
	double imag();

	void real(double re);
	void imag(double im);

private:

	double re_;
	double im_;





};