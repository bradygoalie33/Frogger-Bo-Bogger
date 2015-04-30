#include "core.h"
#include <iostream>

using::std::cout;
using::std::endl;

int baseX = 0;
int baseY = 2;
static bool moveUp = false;
static bool moveDown = false;
static bool moveLeft = false;
static bool moveRight = false;

struct Point
{
	float x;
	float y;
	Point(float x = 0.0f, float y = 0.0f) :
		x(x), y(y) {}
};

Point operator+(const Point& left, const Point& right)
{
	return Point(left.x + right.x, left.y + right.y);
}

void drawLine(Core::Graphics& g, const Point& left, const Point& right)
{
	g.DrawLine(left.x, left.y, right.x, right.y);
}
struct Frog
{
	float frogX = 400;
	float frogY = 400;
	Point leftUpLegUpper;
	Point leftUpLegLower;
	Point leftDownLegUpper;
	Point leftDownLegLower;
	Point BodyTopLeft;
	Point BodyTopRight;
	Point BodyBottomLeft;
	Point BodyBottomRight;
	Point rightUpLegUpper;
	Point rightUpLegLower;
	Point rightDownLegUpper;
	Point rightDownLegLower;

	Point meBase;
	Point velocity;
	Point eyeY;
	Point eyeX;

	Frog() :
		leftUpLegUpper(-50, 50),
		leftUpLegLower(-50, 25),
		leftDownLegUpper(-50, 0),
		leftDownLegLower(-50, -25),
		rightUpLegUpper(0, 50),
		rightUpLegLower(0, 25),
		rightDownLegLower(0, 0),
		rightDownLegUpper(0, -25),
		BodyTopLeft(-50, 0),
		BodyTopRight(-50, 25),
		BodyBottomLeft(0, 0),
		BodyBottomRight(0, 25),
		eyeX(0, 0),
		eyeY(5, 5),

		meBase(frogX, frogY)
	{}
		void drawTheyself(Core::Graphics& g)
		{
			g.SetColor(RGB(100, 255, 100));
			drawLine(g, meBase + leftUpLegUpper, meBase + leftUpLegLower);
			drawLine(g, meBase + leftDownLegUpper, meBase + leftDownLegLower);
			drawLine(g, meBase + rightUpLegUpper, meBase + rightUpLegLower);
			drawLine(g, meBase + rightDownLegUpper, meBase + rightDownLegLower);
			drawLine(g, meBase + BodyBottomLeft, meBase + BodyBottomRight);
			drawLine(g, meBase + BodyBottomLeft, meBase + BodyTopLeft);
			drawLine(g, meBase + BodyBottomRight, meBase + BodyTopRight);
			drawLine(g, meBase + BodyTopLeft, meBase + BodyTopRight);
			g.SetColor(RGB(255, 255, 255));
			Ellipse(g.memDC, 10, 10, 20, 20);
		}
		void Integrate()
		{
			meBase = velocity;
			
		}
};

Frog frog;

void checkKeyInput()
{
	
	float acceleration = 30;
	Point jumpX(10, 0);
	if (Core::Input::IsPressed(Core::Input::KEY_UP) && moveUp == false)
	{
		frog.velocity.y -= acceleration;
		moveUp = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_UP) && moveUp == true)
		moveUp = false;

	if (Core::Input::IsPressed(Core::Input::KEY_DOWN) && moveDown == false)
	{
		frog.velocity.y += acceleration;
		moveDown = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_DOWN) && moveDown == true)
		moveDown = false;

	if (Core::Input::IsPressed(Core::Input::KEY_RIGHT) && moveRight == false)
	{
		frog.velocity.x += acceleration;
		moveRight = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_RIGHT) && moveRight == true)
		moveRight = false;

	if (Core::Input::IsPressed(Core::Input::KEY_LEFT) && moveLeft == false)
	{
		frog.velocity.x -= acceleration;
		moveLeft = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_LEFT) && moveLeft == true)
		moveLeft = false;
}

bool myUpdate(float dt)
{
	frog.Integrate();
	checkKeyInput();
	
	return false;
}

void myDraw(Core::Graphics & graphics)
{

	frog.drawTheyself(graphics);
}

void main()
{
	Core::Init("My Game", 1200, 800);
	Core::RegisterUpdateFn(myUpdate);
	Core::RegisterDrawFn(myDraw);
	Core::GameLoop();
}

