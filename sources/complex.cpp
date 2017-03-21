#include "complex.hpp"


void complex::print(ostream &out)
{
	out << real << "+" << image << "i" << endl;
}
complex complex::mult(int k) const
{
	return complex(real*k, k*image);
}
complex complex::div(int k) const
{
	return complex(real / k, image / k);
}
complex complex::summ(complex b) const
{
	return complex(real + b.real, image + b.image);
}
complex complex::diff(complex b) const
{
	return complex(real - b.real, image - b.image);
}
complex& complex::operator +=(const complex& a)
{
	real+=a.real;
	image+=a.image;
	return *this;
}
complex& complex::operator -=(const complex& a)
{
	real-=a.real;
	image-=a.image;
	return *this;
}


bool complex::operator ==(const complex& a) const
{
	return ((this->real == a.real) && (this->image == a.image));
}
complex& complex::operator =(const complex& a)
{
	image = a.image;
	real = a.real;
	return *this;

}
complex complex::operator *(const complex& a) const
{
	return complex(real*a.real - image*a.image, real*a.image + image*a.real);

}
complex complex::operator /(const complex& a) const
{
	
	return complex((real*a.real + image*a.image) /( a.image*a.image + a.real*a.real), (image*a.real - real*a.image ) / (a.image*a.image + a.real*a.real));

}
complex& complex::operator *=(const complex& a)
{	
	real=real*a.real - image*a.image;
	image=real*a.image + image*a.real;
	return *this;
}
complex& complex::operator /=(const complex& a)
{	
	real=(real*a.real + image*a.image) /( a.image*a.image + a.real*a.real);
	image=(image*a.real - real*a.image ) / (a.image*a.image + a.real*a.real);
	return *this;
}

std::ostream& operator <<(std::ostream& out, complex& a)
{
	out << a.real << "+" << a.image << "i" << endl;
	return out;
}
std::istream& operator >> (std::istream& in, complex& a)
{
	in >> a.real;
	in >> a.image;
	return in;
}
double complex::im()
{
	return image;
}
double complex::re()
{
	return real;
}
