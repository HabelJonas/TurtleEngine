#include "TurtleEngine/Vector3.hpp"
#include <cmath>

namespace Turtle
{
	namespace Math
	{
		Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z)
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
		float& Vector3::operator[](int i)
		{
			return ((&x)[i]);
		}
		const float& Vector3::operator[](int i) const
		{
			return ((&x)[i]);
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