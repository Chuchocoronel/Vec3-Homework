#include <stdlib.h>
#include <iostream>
#include <cmath>

template <typename Type>

class Vec3
{
public:

	//Constructors

	Vec3()
	{

		x = 0;
		y = 0;
		z = 0;

	}

	Vec3(Type _x, Type _y, Type _z)
	{

		x = _x;
		y = _y;
		z = _z;

	}

	Vec3(Type num)
	{

		x = num;
		y = num;
		z = num;

	}

	Vec3(Vec3& vec)
	{

		x = vec.x;
		y = vec.y;
		z = vec.z;

	}

	//Operators

	Vec3 operator+(const Vec3& vec2)
	{

		Vec3 auxVec;

		auxVec.x = this->x + vec2.x;
		auxVec.y = this->y + vec2.y;
		auxVec.z = this->z + vec2.z;

		return auxVec;

	}

	Vec3 operator-(const Vec3& vec2)
	{

		Vec3 auxVec;

		auxVec.x = this->x - vec2.x;
		auxVec.y = this->y - vec2.y;
		auxVec.z = this->z - vec2.z;

		return auxVec;

	}

	Vec3 operator+=(const Vec3& vec2)
	{

		this->x += vec2.x;
		this->y += vec2.y;
		this->z += vec2.z;
		
		return *this;
	}

	Vec3 operator-=(const Vec3& vec2)
	{

		this->x -= vec2.x;
		this->y -= vec2.y;
		this->z -= vec2.z;

		return *this;
	}

	Vec3 operator=(const Vec3& vec2)
	{

		this->x = vec2.x;
		this->y = vec2.y;
		this->z = vec2.z;

		return *this;
	}

	bool operator==(const Vec3& vec2)
	{

		return (this->x == vec2.x && this->y == vec2.y && this->z == vec2.z);
		
	}

	//Methods

	Vec3 Normalize()
	{

		Vec3 auxVec;

		double mod = sqrt(this->x * this->x + this->y * this->y + this->z * this->z);

		auxVec.x = this->x / mod;
		auxVec.y = this->y / mod;
		auxVec.z = this->z / mod;

		return auxVec;
	}

	void Zero()
	{

		this->x = 0;
		this->y = 0;
		this->z = 0;

	}

	bool IsZero()
	{

		return (this->x == 0 && this->y == 0 && this->z == 0);

	}

	float DistanceTo(Vec3& vec2)
	{

		Vec3 auxVec = { vec2.x - this->x, vec2.y - this->y, vec2.z - this->z };

		return sqrt(auxVec.x * auxVec.x + auxVec.y * auxVec.y + auxVec.z * auxVec.z);

	}

private:

	Type x;
	Type y;
	Type z;

};

int main()
{

	Vec3 <int> vec;
	Vec3 <int> vec2(-7, -4, -5);
	Vec3 <int> vec3(7);
	Vec3 <int> vec4(vec2);

	system("pause");
	return 0;
}