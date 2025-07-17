#pragma once

namespace Turtle
{
	namespace Math
	{
		class Vector3 
		{
		public:
			float x, y, z;

			Vector3(float x = 0, float y = 0, float z = 0);
			Vector3 operator+(Vector3 const& v) const;
			Vector3 operator-(Vector3 const& v) const;
			float Dot(Vector3 const& v) const;
			Vector3 Cross(Vector3 const& v) const;
			float Length() const;
			Vector3 Normalized() const;
		};
	}
}