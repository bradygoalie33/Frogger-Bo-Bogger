#include "core.h"

int baseX = 0;
int baseY = 2;

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

	Frog() :
		leftUpLegUpper(-50, 50),
		leftUpLegLower(-50, 25),
		leftDownLegUpper(-50, 0),
		leftDownLegLower(-50, -25),
		rightUpLegUpper(0, 50),
		rightUpLegLower(0, 25),
		rightDownLegLower(0, 0),
		rightDownLegUpper(0, -25),
		BodyTopLeft(0, 0),
		BodyTopRight(0,50),
		BodyBottomLeft(50,0),
		BodyBottomRight(50,50),
		
		meBase(400, 400)
	{}
		void drawTheyself(Core::Graphics& g)
		{
			
			drawLine(g, meBase + leftUpLegUpper, meBase + leftUpLegLower);
			drawLine(g, meBase + leftDownLegUpper, meBase + leftDownLegLower);
			drawLine(g, meBase + rightUpLegUpper, meBase + rightUpLegLower);
			drawLine(g, meBase + rightDownLegUpper, meBase + rightDownLegLower);
			drawLine(g, meBase + BodyBottomLeft, meBase + BodyBottomRight);
			drawLine(g, meBase + BodyBottomLeft, meBase + BodyTopLeft);
			drawLine(g, meBase + BodyBottomRight, meBase + BodyTopRight);
			drawLine(g, meBase + BodyTopLeft, meBase + BodyTopRight);
			
		}
		void Intergrate()
		{
			meBase = meBase + velocity;
		}
};

Frog frog;

void checkKeyInput()
{
	float acceleration = 1;
	if (Core::Input::IsPressed(Core::Input::KEY_UP))
		frog.velocity.y -= acceleration;
	if (Core::Input::IsPressed(Core::Input::KEY_DOWN))
		frog.velocity.y += acceleration;
	if (Core::Input::IsPressed(Core::Input::KEY_RIGHT))
		frog.velocity.x += acceleration;
	if (Core::Input::IsPressed(Core::Input::KEY_LEFT))
		frog.velocity.x -= acceleration;
}

bool myUpdate(float dt)
{
	frog.Intergrate();
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

