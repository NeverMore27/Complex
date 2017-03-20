#include <complex.hpp>
#include <catch.hpp>

SCENARIO("init") 
{
	complex a;
	REQUIRE(a.im() == 0);
	REQUIRE(a.re() == 0);
}

SCENARIO("param") 
{
	complex a(2, 2);
	REQUIRE(a.im() == 2);
	REQUIRE(a.re() == 2);
}

SCENARIO("copy")
{
	complex a (4, 4), b(a);	
	REQUIRE(a.im() ==b.im());
	REQUIRE(a.real() == b.real());
	
}

SCENARIO("+")
{
	complex a (4, 4), b(a);
	complex c(8, 8);
	REQUIRE(a + b== c);
}

SCENARIO("*") 
{
	matrix a ("matrix1.txt");
	matrix b ("matrix2.txt");
	matrix c ("matrix2.txt");
	REQUIRE(a*b==c);
}
SCENARIO("==") 
{
	matrix a(3, 3);
	matrix b (a);
	REQUIRE(a == b);
}

SCENARIO("=") {
	matrix a(2, 2);
	matrix f = a;
	REQUIRE(f == a);
}
