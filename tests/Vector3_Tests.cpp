#define CATCH_CONFIG_MAIN
#include <catch2/catch_all.hpp>
#include "TurtleEngine/Vector3.hpp"

TEST_CASE("Vector3 addition")
{
	// Arrange
	Turtle::Math::Vector3 a{ 1,2,3 }, b{ 3,2,1 };

	// Act
	Turtle::Math::Vector3 result = a + b;

	// Assert
    REQUIRE(result.x == 4);
    REQUIRE(result.y == 4);
    REQUIRE(result.z == 4);
}