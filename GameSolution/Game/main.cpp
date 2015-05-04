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
static bool gameStarting = true;

static float frogX = 20;
static float frogY = 20;

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

struct Car
{
	Point topLeft;
	Point topRight;
	Point bottomLeft;
	Point bottomRight;
	
	Point meBase;
	Point velocity;


	Car(Point topleft, Point topright, Point bottomleft, Point bottomright){
		meBase = (100.0f, 100.0f);
		topLeft = topleft;
		topRight = topright;
		bottomLeft = bottomleft;
		bottomRight = bottomright;
	}

	void drawthyself(Core::Graphics& g){
		int randInt = rand() % 4;
		if (randInt == 0){
			g.SetColor(RGB(255, 0, 0));
		}
		else if (randInt == 1){
			g.SetColor(RGB(0, 0, 255));
		}
		else if (randInt == 2){
			g.SetColor(RGB(0, 255, 0));
		}
		else{
			g.SetColor(RGB(255, 255, 255));
		}
		
		//drawLine(g, meBase + topLeft, meBase + topRight);
		//drawLine(g, meBase + topRight, meBase + bottomRight);
		//drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		//drawLine(g, meBase + bottomLeft, meBase + topLeft);

		drawLine(g, topLeft, topRight);
		drawLine(g, topRight, bottomRight);
		drawLine(g, bottomRight, bottomLeft);
		drawLine(g, bottomLeft, topLeft);
	}
	void integrate(){
		meBase + velocity;
	}

};

Car getRandCar(){
	
	int randInt = rand() % 5;

	//BodyTopLeft(640, 720 + 70),
	//	BodyTopRight(660, 720 + 70),
	//	BodyBottomLeft(640, 755 + 70),
	//	BodyBottomRight(660, 755 + 70)
	//
	//if (randInt == 0){
	//	Point point1 = (150.0f, -150.0f);
	//	Point point2 = (200.0f, -150.0f);
	//	Point point3 = (200.0f, -200.0f);
	//	Point point4 = (150.0f, -200.0f);
	//	Car car1(point1, point2, point3, point4);
	//	return car1;
	//}
	//else if (randInt == 1){
	//	Point point1 = (150.0f, -150.0f);
	//	Point point2 = (200.0f, -150.0f);
	//	Point point3 = (200.0f, -200.0f);
	//	Point point4 = (150.0f, -200.0f);
	//	Car car2(point1, point2, point3, point4);
	//	return car2;
	//}
	//else if (randInt == 2){
	//	Point point1 = (150.0f, -150.0f);
	//	Point point2 = (200.0f, -150.0f);
	//	Point point3 = (200.0f, -200.0f);
	//	Point point4 = (150.0f, -200.0f);
	//	Car car3(point1, point2, point3, point4);
	//	return car3;
	//}
	//else if (randInt == 3){
	//	Point point1 = (150.0f, -150.0f);
	//	Point point2 = (200.0f, -150.0f);
	//	Point point3 = (200.0f, -200.0f);
	//	Point point4 = (150.0f, -200.0f);
	//	Car car4(point1, point2, point3, point4);
	//	return car4;
	//}
	//else{
	//	Point point1 = (150.0f, -150.0f);
	//	Point point2 = (200.0f, -150.0f);
	//	Point point3 = (200.0f, -200.0f);
	//	Point point4 = (150.0f, -200.0f);
	//	Car car5(point1, point2, point3, point4);
	//	return car5;
	//}

	if (randInt == 0){
		Point point1 = (640.0f, 720.0f + 70.0f);
		Point point2 = (660.0f, 720.0f + 70.0f);
		Point point3 = (640.0f, 755.0f + 70.0f);
		Point point4 = (660.0f, 755.0f + 70.0f);
		Car car1(point1, point2, point3, point4);
		return car1;
	}
	else if (randInt == 1){
		Point point1 = (640.0f, 720.0f + 70.0f);
		Point point2 = (660.0f, 720.0f + 70.0f);
		Point point3 = (640.0f, 755.0f + 70.0f);
		Point point4 = (660.0f, 755.0f + 70.0f);
		Car car2(point1, point2, point3, point4);
		return car2;
	}
	else if (randInt == 2){
		Point point1 = (640.0f, 720.0f + 70.0f);
		Point point2 = (660.0f, 720.0f + 70.0f);
		Point point3 = (640.0f, 755.0f + 70.0f);
		Point point4 = (660.0f, 755.0f + 70.0f);
		Car car3(point1, point2, point3, point4);
		return car3;
	}
	else if (randInt == 3){
		Point point1 = (640.0f, 720.0f + 70.0f);
		Point point2 = (660.0f, 720.0f + 70.0f);
		Point point3 = (640.0f, 755.0f + 70.0f);
		Point point4 = (660.0f, 755.0f + 70.0f);
		Car car4(point1, point2, point3, point4);
		return car4;
	}
	else{
		Point point1 = (640.0f, 720.0f + 70.0f);
		Point point2 = (660.0f, 720.0f + 70.0f);
		Point point3 = (640.0f, 755.0f + 70.0f);
		Point point4 = (660.0f, 755.0f + 70.0f);
		Car car5(point1, point2, point3, point4);
		return car5;
	}
	

	
}

Car car = getRandCar();


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

	Point connectUpLeft;
	Point connectUpRight;
	Point connectDownLeft;
	Point connectDownRight;

	Point meBase;
	Point velocity;
	Point eyeY;
	Point eyeX;

	Frog() :
		
		meBase(frogX, frogY),

		leftUpLegUpper(625, 775 + 70),
		leftUpLegLower(625, 750 + 70),
		leftDownLegUpper(625, 725 + 70),
		leftDownLegLower(625, 700 + 70),
		rightUpLegUpper(675, 775 + 70),
		rightUpLegLower(675, 750 + 70),
		rightDownLegLower(675, 725 + 70),
		rightDownLegUpper(675, 700 + 70),

		BodyTopLeft(640, 720 + 70),
		BodyTopRight(660, 720 + 70),
		BodyBottomLeft(640, 755 + 70),
		BodyBottomRight(660, 755 + 70)


	{}
		void drawThyself(Core::Graphics& g)
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
			drawLine(g, meBase + leftUpLegLower, meBase + BodyBottomLeft);
			drawLine(g, meBase + leftDownLegUpper, meBase + BodyTopLeft);
			drawLine(g, meBase + rightUpLegLower, meBase + BodyBottomRight);
			drawLine(g, meBase + rightDownLegLower, meBase + BodyTopRight);
			
			
		}
		void Integrate()
		{
			meBase = velocity;
			
		}
};

Frog frog;

void checkKeyInput()
{
	
	float vAcceleration = 85;
	float hAcceleration = 75;
	Point jumpX(10, 0);
	if (Core::Input::IsPressed(Core::Input::KEY_UP) && moveUp == false && (frog.velocity.y > -700))
	{
		frog.velocity.y -= vAcceleration;
		frogY -= vAcceleration;
		moveUp = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_UP) && moveUp == true)
		moveUp = false;

	if (Core::Input::IsPressed(Core::Input::KEY_DOWN) && moveDown == false && (frog.velocity.y < 0))
	{
		frog.velocity.y += vAcceleration;
		moveDown = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_DOWN) && moveDown == true)
		moveDown = false;

	if (Core::Input::IsPressed(Core::Input::KEY_RIGHT) && moveRight == false && (frog.velocity.x < 500))
	{
		frog.velocity.x += hAcceleration;
		moveRight = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_RIGHT) && moveRight == true)
		moveRight = false;

	if (Core::Input::IsPressed(Core::Input::KEY_LEFT) && moveLeft == false && (frog.velocity.x > -600))
	{
		frog.velocity.x -= hAcceleration;
		moveLeft = true;
	}
	else if (!Core::Input::IsPressed(Core::Input::KEY_LEFT) && moveLeft == true)
		moveLeft = false;
}

bool myUpdate(float dt)
{
	frog.Integrate();
	car.integrate();
	checkKeyInput();
	
	return false;
}

void gameBackground(Core::Graphics& graphics)
{	
	int i;
	int k;
	//WHITE ROAD LINES
	graphics.SetColor(RGB(255, 255, 255));
	for (i = 0; i < 3; i++)
	{
		graphics.DrawLine(0, 765.0f - i, 1250.0f, 765.0f - i);
		graphics.DrawLine(0, 340.0f + i, 1250.0f, 340.0f + i);
	}
	

	for (k = 0; k < 26; k += 2)
	{
		for (i = 0; i < 53; i++)
		{
			float b = 50;
			float c = b*k;
			graphics.DrawLine(c, 425.0f, c + i, 425.0f);
			graphics.DrawLine(c, 595.0f, c + i, 595.0f);

		}
	}

	//YELLOW ROAD LINES
	graphics.SetColor(RGB(250, 210, 1));
	
	for (k = 0; k < 26; k+=2)
	{
		for (i = 0; i < 50; i++)
		{
			float b = 50;
			float c = b*k;
			graphics.DrawLine(c, 680.0f, c + i, 680.0f);
			graphics.DrawLine(c, 510.0f, c + i, 510.0f);
		}
	}



	//WATER
	graphics.SetColor(RGB(0, 0, 205));
	
	for (i = 0; i > -275; i--)
		graphics.DrawLine(0.0f, 255.0f + i, 1250.0f, 255.0f + i);
	
	//LANDING STRIPS
	graphics.SetColor(RGB(85, 107, 47));
	
	for (i = 0; i > -85; i--)
	{
		graphics.DrawLine(80.0f, 85.0f + i, 240.0f, 85.0f + i);
		graphics.DrawLine(390.0f, 85.0f + i, 540.0f, 85.0f + i);
		graphics.DrawLine(690.0f, 85.0f + i, 840.0f, 85.0f + i);
		graphics.DrawLine(990.0f, 85.0f + i, 1140.0f, 85.0f + i);
	}

	//Front and WaterSide Safezones
	graphics.SetColor(RGB(85, 107, 47));
	for (i = 0; i < 85; i++)
	{
		graphics.DrawLine(0.0f, 255.0f + i, 1250.0f, 255.0f + i);
		graphics.DrawLine(0.0f, 850.0f - i, 1250.0f, 850.0f - i);
	}
	
}

void myDraw(Core::Graphics & graphics)
{
	gameBackground(graphics);
	frog.drawThyself(graphics);
	car.drawthyself(graphics);
	
}

void main()
{
	Core::Init("My Game", 1210, 850);
	Core::RegisterUpdateFn(myUpdate);
	Core::RegisterDrawFn(myDraw);
	Core::GameLoop();
	

}

