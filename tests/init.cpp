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

