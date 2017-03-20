#include <iostream>
#include <ctime>
#include <locale>


using namespace std;

class complex
{
private:
	double real;
	double image;
public:
	complex() {};
	complex(double r, double i)
	{
		real = r;
		image = i;
	};
	~complex() {};

	void print(ostream &out);
	complex mult(int k) const;
	complex div(int k) const;
	complex summ(complex b) const;
	complex diff(complex b) const;
	complex(const complex& a)
	{
		real = a.real;
		image = a.image;
	}
	complex operator *(const complex& a) const;
	complex operator /(const complex&) const;
	complex& operator +=(const complex&);
	complex& operator -=(const complex&);
	complex& operator *=(const complex&);
	complex& operator /=(const complex&);
	complex& operator =(const complex&);
	bool operator ==(const complex&) const;




friend std::ostream& operator <<(std::ostream& out, complex& a);
friend std::istream& operator >> (std::istream& in, complex& a);

};
