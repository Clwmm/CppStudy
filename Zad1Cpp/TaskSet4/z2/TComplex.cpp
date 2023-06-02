#include "TComplex.h"

TComplex::TComplex(double re, double im)
	: re(re), im(im)
{
}

TComplex TComplex::operator()() const
{
	return TComplex(this->re, this->im);
}

TComplex TComplex::operator+(const TComplex& other) const
{
	return TComplex(this->re + other.re, this->im + other.im);
}

TComplex TComplex::operator-(const TComplex& other) const
{
	return TComplex(this->re - other.re, this->im - other.im);
}

TComplex TComplex::operator*(const TComplex& other) const
{
	double resultRe = this->re * other.re - this->im * other.im;
	double resultIm = this->re * other.im + this->im * other.re;
	return TComplex(resultRe, resultIm);
}

TComplex TComplex::operator/(const TComplex& other) const
{
	double d = pow(other.re, 2) + pow(other.im, 2);

	if (d > 0)
	{
		double resultRe = (this->re * other.re + this->im * other.im) / d;
		double resultIm = (this->im * other.re - this->re * other.im) / d;
		return TComplex(resultRe, resultIm);
	}

	std::cout << "\nError: Division by zero" << std::endl;
	exit(EXIT_FAILURE);
	
}

TComplex TComplex::conj() const
{
	return TComplex(this->re, -this->im);
}

double TComplex::abs()
{
	return sqrt(pow(this->re, 2) + pow(this->im, 2));
}

std::ostream& operator<<(std::ostream& out, const TComplex& tc)
{
	out << "(" << tc.re << "," << tc.im << ")";
	return out;
}
