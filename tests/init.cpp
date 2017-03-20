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
	REQUIRE(a.re() == b.re());
	
}

SCENARIO("+")
{
	complex a (4, 4), b(a);
	complex c(8, 8);
	b+=a;
	REQUIRE(b== c);
}

SCENARIO("*") 
{
	complex b(3, 3), a(1,1), c(0,6);
	b*=a;
	REQUIRE(b==c);
}

SCENARIO("/") 
{
	complex b(3, 3), a(9,9), c(3, 0);
	a/=b;
	REQUIRE(b==c);
}

SCENARIO("==") 
{
	complex a(3, 3);
	complexb (a);
	REQUIRE(a == b);
}

SCENARIO("=") {
	complex a(2, 2);
	complex f = a;
	REQUIRE(f == a);
}

SCENARIO("-") {
	complex a(9, 9), b(3, 3), f(6, 6);
	a-=b;
	REQUIRE(f == a);
}
