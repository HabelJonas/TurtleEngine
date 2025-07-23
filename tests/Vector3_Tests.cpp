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
	SECTION("Non-const Vector3 access")
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

	SECTION("Non-const Vector3 modification")
	{
		// Arrange
		Turtle::Math::Vector3 a{ 1,2,3 };

		// Act
		a[0] = 2;

		// Assert
		REQUIRE(a[0] == 2);
		REQUIRE(a[1] == 2);
		REQUIRE(a[2] == 3);
	}

	SECTION("Const Vector3 accesss")
	{
		// Arrange
		const Turtle::Math::Vector3 a{ 1,2,3 };

		// Act
		float a1 = a[0];
		float a2 = a[1];
		float a3 = a[2];

		// Assert
		REQUIRE(a1 == 1);
		REQUIRE(a2 == 2);
		REQUIRE(a3 == 3);
	}

}
#ifdef NDEBUG
	TEST_CASE("Vector3 subscript operator out of range in release")
	{
		SECTION("Non-const Vector3")
		{
			// Arrange
			Turtle::Math::Vector3 a{ 1, 2, 3 };

			// Act
			float out_of_bounds_lower = a[-1];
			float out_of_bounds_upper = a[3];

			// Assert
			// The default case in the switch statement returns 'x'.
			REQUIRE(out_of_bounds_lower == a[0]);
			REQUIRE(out_of_bounds_upper == a[0]);
		}

		SECTION("Const Vector3")
		{
			// Arrange
			const Turtle::Math::Vector3 a{ 1, 2, 3 };

			// Act
			const float& out_of_bounds_lower = a[-1];
			const float& out_of_bounds_upper = a[3];

			// Assert
			// The default case in the switch statement returns 'x'.
			REQUIRE(out_of_bounds_lower == a[0]);
			REQUIRE(out_of_bounds_upper == a[0]);
		}
	}
#endif
