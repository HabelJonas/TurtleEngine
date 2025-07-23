#include "TurtleEngine/Vector3.hpp"
#include <cassert>

namespace Turtle
{
	namespace Math
	{
		Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z)
		{
		}

		Vector3 Vector3::operator+(Vector3 const& v) const
		{
			return Vector3(x + v.x, y + v.y, z + v.z);
		}

		Vector3 Vector3::operator-(Vector3 const& v) const
		{
			return Vector3(x - v.x, y - v.y, z - v.z);
		}

		float& Vector3::operator[](int i)
		{
			assert(i >= 0 && i < 3 && "Vector3 subscript out of range.");
			switch (i) 
			{
			case 0: return x;
			case 1: return y;
			case 2: return z;
			default:
				return x;
			}
		}

		const float& Vector3::operator[](int i) const
		{
			assert(i >= 0 && i < 3 && "Vector3 subscript out of range.");
			switch (i) 
			{
			case 0: return x;
			case 1: return y;
			case 2: return z;
			default:
				return x;
			}
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