
#include <iostream>


#include <iostream>

class Sword;

class Jewel
{
public:
	void Socket(Sword& s);
};

class Sword
{
	friend class Warrior;//friend class
	friend void EnhanceSword(Sword& s);//friend function
	friend void Jewel::Socket(Sword& s);//friend member-function

public:
	Sword(int damage) : mAttackDamage(damage) {}

private:
	int mAttackDamage;
};

class Warrior
{
public:
	void Attack(Sword& weapon)
	{
		std::cout << "전사는 칼을 휘둘러 " << weapon.mAttackDamage
			<< "만큼 피해를 주었다." << std::endl;
	}
};
void EnhanceSword(Sword& s)
{
	s.mAttackDamage += s.mAttackDamage;
}
/*
class Jewel
{
public:
	void Socket(Sword& s)
	{
		std::cout << s.mAttackDamage << "인 무기에 홈을 추가했다." << std::endl;
	}

};
*/
//------------------------------------------------------------------------------------------
void Jewel::Socket(Sword& s)
{
	std::cout << s.mAttackDamage << "인 무기에 홈을 추가했다." << std::endl;
}
class Point2D
{
private:
	int mX;
	int mY;

public:
	Point2D() { std::cout << "0" << std::endl; }
	Point2D(int x, int y) : mX(x), mY(y)
	{
		std::cout << "1" << std::endl;
	}

	void Print()
	{
		std::cout << "(" << mX << "," << mY << ")" << std::endl;
	}

	Point2D operator +(const Point2D& rhs)
	{
		Point2D result;
		result.mX = mX + rhs.mX;
		result.mY = mY + rhs.mY;
		return result;
	}

	Point2D operator -(const Point2D& rhs)
	{
		Point2D result;
		result.mX = mX - rhs.mX;
		result.mY = mY - rhs.mY;
		return result;
	}

	Point2D operator *(const int x)
	{
		Point2D result;
		result.mX = mX * x;
		result.mY = mY * x;
		return result;
	}
	Point2D operator /(const int x)
	{

		Point2D result;
		result.mX = mX / x;
		result.mY = mY / x;
		return result;
	}
	Point2D operator /(const Point2D& rhs)
	{
		Point2D result;
		result.mX = mX / rhs.mX;
		result.mY = mY / rhs.mY;
		return result;
	}

	//friend Point2D operator + (Point2D lhs, Point2D rhs);
};


//키워드 추가, 연산자 오버로딩
/*
Point2D operator + (Point2D lhs, Point2D rhs)
{
	Point2D result;
	result.mX = lhs.mX + rhs.mX;
	result.mY = lhs.mY + rhs.mY;
	return result;
}
*/

struct a
{

};

int main()
{
	/*
	Sword shortSword(10);
	Sword longSword(100);
	Warrior player;

	player.Attack(shortSword);
	player.Attack(longSword);

	EnhanceSword(shortSword);
	player.Attack(shortSword);
	//-------------------------------------------------------------

	Point2D pt1(2, 3), pt2(3, 5);

	pt1.Print();
	pt2.Print();

	Point2D pt3(pt1 + pt2);
	pt3.Print();

	Point2D pt4 = pt1.operator+(pt2);
	pt4.Print();
	*/
	Point2D pt1(2, 2), pt2(2, 0);
	
	Point2D result = pt1 + pt2;
	result.Print();

	result = pt1 - pt2;
	result.Print();

	result = pt1 * 3;
	result.Print();

	result = pt1 / pt2;
	result.Print();
}


