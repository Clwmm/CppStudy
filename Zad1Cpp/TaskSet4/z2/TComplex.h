#pragma once
#include <iostream>

class TComplex
{
public:
	TComplex(double re, double im);
	TComplex operator()() const;
	TComplex operator+(const TComplex& other) const;
	TComplex operator-(const TComplex& other) const;
	TComplex operator*(const TComplex& other) const;
	TComplex operator/(const TComplex& other) const;
	TComplex conj() const;
	double abs();
	friend std::ostream& operator<<(std::ostream& out, const TComplex& tc);

private:
	double re{ 0 }, im{ 0 };
};

