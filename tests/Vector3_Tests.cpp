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

TEST_CASE("Vector3 subtraction")
{
	// Arrange
	Turtle::Math::Vector3 a{ 4,4,4 }, b{ 2,2,2 };

	// Act
	Turtle::Math::Vector3 result = a - b;

	// Assert
	REQUIRE(result.x == 2);
	REQUIRE(result.y == 2);
	REQUIRE(result.z == 2);
}

TEST_CASE("Vector3 subscript operator")
{
	// Arrange
	Turtle::Math::Vector3 a{ 1,2,3 };

	// Act
	float a1 = a[0];
	float a2 = a[1];
	float a3 = a[2];

	// Assert
	REQUIRE(a1 == 1);
	REQUIRE(a2 == 2);
	REQUIRE(a3 == 3);

}