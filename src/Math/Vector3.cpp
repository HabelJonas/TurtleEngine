#include "Vector3.hpp"
#include <cmath>

namespace Turtle
{
	namespace Math
	{
		Vector3::Vector3(float x, float y, float z) : x_(x), y_(y), z_(z)
		{
		}
		Vector3 Vector3::operator+(Vector3 const& v) const
		{
			return Vector3();
		}
		Vector3 Vector3::operator-(Vector3 const& v) const
		{
			return Vector3();
		}
		float Vector3::Dot(Vector3 const& v) const
		{
			return 0.0f;
		}
		Vector3 Vector3::Cross(Vector3 const& v) const
		{
			return Vector3();
		}
		float Vector3::Length() const
		{
			return 0.0f;
		}
		Vector3 Vector3::Normalized() const
		{
			return Vector3();
		}
	}
}