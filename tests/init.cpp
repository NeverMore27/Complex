#include <complex.hpp>
#include <catch.hpp>

SCENARIO("init") 
{
	complex a;
	REQUIRE(a.im() == 0);
	REQUIRE(a.re() == 0);
}

