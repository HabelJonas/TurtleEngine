#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "Math/Vector3.hpp"

TEST_CASE("Vector3 basic operations")
{
	Turtle::Math::Vector3 a{ 1,2,3 }, b{ 3,2,1 };
    REQUIRE((a + b).x_ == 4);
    //REQUIRE(a.Dot(b) == 1 * 3 + 2 * 2 + 3 * 1);
    //auto c = a.Cross(b);
    //REQUIRE(c.x == (2 * 1 - 3 * 2));
    //REQUIRE(a.Normalized().Length() == Approx(1.0f));
}