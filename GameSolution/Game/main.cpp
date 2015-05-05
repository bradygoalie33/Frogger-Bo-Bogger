#include "core.h"
#include <iostream>

using::std::cout;
using::std::endl;
using std::string;

int baseX = 0;
int baseY = 2;

enum gameStates { Menu, GameOver, Paused, Playing };
static gameStates gameState = Menu;
static bool moveUp = false;
static bool moveDown = false;
static bool moveLeft = false;
static bool moveRight = false;
static bool gameStarting = true;

static float frogX = 20;
static float frogY = 20;

static float car1X = 20;
static float car1Y = 20;
static bool car1MoveRight = true;

static float car2X = 20;
static float car2Y = 20;
static bool car2MoveRight = true;

static float car3X = 20;
static float car3Y = 20;
static bool car3MoveRight = true;

static float car4X = 20;
static float car4Y = 20;
static bool car4MoveRight = true;

static float car5X = 20;
static float car5Y = 20;
static bool car5MoveRight = true;



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

	Car() :

		meBase(car1X,car1Y),
		topLeft(400,690),
		topRight(490, 690),
		bottomLeft(400,730),
		bottomRight(490, 730)
			
		{}				  

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

		drawLine(g, meBase + topLeft, meBase + topRight);
		drawLine(g, meBase + topRight, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		drawLine(g, meBase + bottomLeft, meBase + topLeft);
	}
	void integrate(){
		meBase + velocity;
	}

};

struct Car2
{
	Point topLeft;
	Point topRight;
	Point bottomLeft;
	Point bottomRight;

	Point meBase;
	Point velocity;

	Car2() :
		meBase(car2X, car2Y),
		topLeft(400, 600),
		topRight(490, 600),
		bottomLeft(400, 640),
		bottomRight(490, 640)

	{}

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

		drawLine(g, meBase + topLeft, meBase + topRight);
		drawLine(g, meBase + topRight, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		drawLine(g, meBase + bottomLeft, meBase + topLeft);
	}
	void integrate(){
		meBase + velocity;
	}

};

struct Car3
{
	Point topLeft;
	Point topRight;
	Point bottomLeft;
	Point bottomRight;

	Point meBase;
	Point velocity;

	Car3() :
		meBase(car3X, car3Y),
		topLeft(400, 510),
		topRight(490, 510),
		bottomLeft(400, 550),
		bottomRight(490, 550)

	{}

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

		drawLine(g, meBase + topLeft, meBase + topRight);
		drawLine(g, meBase + topRight, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		drawLine(g, meBase + bottomLeft, meBase + topLeft);
	}
	void integrate(){
		meBase + velocity;
	}

};

struct Car4
{
	Point topLeft;
	Point topRight;
	Point bottomLeft;
	Point bottomRight;

	Point meBase;
	Point velocity;

	Car4() :
		meBase(car4X, car4Y),
		topLeft(400, 430),
		topRight(490, 430),
		bottomLeft(400, 470),
		bottomRight(490, 470)

	{}

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

		drawLine(g, meBase + topLeft, meBase + topRight);
		drawLine(g, meBase + topRight, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		drawLine(g, meBase + bottomLeft, meBase + topLeft);
	}
	void integrate(){
		meBase + velocity;
	}

};

struct Car5
{
	Point topLeft;
	Point topRight;
	Point bottomLeft;
	Point bottomRight;

	Point meBase;
	Point velocity;

	Car5() :
		meBase(car5X, car5Y),
		topLeft(400, 340),
		topRight(490, 340),
		bottomLeft(400, 380),
		bottomRight(490, 380)

	{}

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

		drawLine(g, meBase + topLeft, meBase + topRight);
		drawLine(g, meBase + topRight, meBase + bottomRight);
		drawLine(g, meBase + bottomRight, meBase + bottomLeft);
		drawLine(g, meBase + bottomLeft, meBase + topLeft);
		
	}
	void integrate(){

		if (meBase.x <= -150 || meBase.x >= 200)
		{	
			car5MoveRight = !car5MoveRight;

			if (car5MoveRight == true && meBase.x <= -150)
				meBase.x += 3;
			else if (car5MoveRight == false && meBase.x >= 200)
				meBase.x -= 3;
		}
		
		else if (meBase.x >= -150 || meBase.x <= 200)
		{
			if (car5MoveRight == true)
				meBase.x += 10;
			else if (car5MoveRight == false)
				meBase.x -=10;
		}
		
			
	}

};

Car car;
Car2 car2;
Car3 car3;
Car4 car4;
Car5 car5;



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
	//if (gameState == Playing){
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
	//}
}

void gameLogic()
{

}

bool myUpdate(float dt)
{
	frog.Integrate();
	car.integrate();
	car5.integrate();
	checkKeyInput();
	gameLogic();
	return false;
}

void gameBackground(Core::Graphics& graphics)
{	
	
	if (gameState == Menu){

		graphics.DrawString(1110/2, 850/2, "IT'S FROGGER");
		graphics.DrawString(1110 / 2, 900 / 2, "NEW GAME");
		graphics.DrawString(1110 / 2, 950 / 2, "I'M OUT");
		Ellipse(graphics.memDC, 650, 675, 625, 650);
	}
	
	//else if (gameState == Playing){
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

		for (k = 0; k < 26; k += 2)
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
		//LeftMostOutline
		graphics.SetColor(RGB(0, 0, 0));
		graphics.DrawLine(80.0f, 85.0f, 240.0f, 85.0f);
		graphics.DrawLine(80.0f, 0.0f, 80.0f, 85.0f);
		graphics.DrawLine(240.0f, 0.0f, 240.0f, 85.0f);
		//CenterLeftOutline
		graphics.DrawLine(390.0f, 85.0f, 540.0f, 85.0f);
		graphics.DrawLine(390.0f, 0.0f, 390.0f, 85.0f);
		graphics.DrawLine(540.0f, 0.0f, 540.0f, 85.0f);
		//CenterRightOutline
		graphics.DrawLine(690.0f, 85.0f, 840.0f, 85.0f);
		graphics.DrawLine(690.0f, 0.0f, 690.0f, 85.0f);
		graphics.DrawLine(840.0f, 0.0f, 840.0f, 85.0f);
		//RightMostOutline
		graphics.DrawLine(990.0f, 85.0f, 1140.0f, 85.0f);
		graphics.DrawLine(990.0f, 0.0f, 990.0f, 85.0f);
		graphics.DrawLine(1140.0f, 0.0f, 1140.0f, 85.0f);

		//FRONT AND WATERSIDE SAFEZONES
		//Outline
		graphics.DrawLine(0.0f, 254.0f, 1250.0f, 254.0f);

		graphics.SetColor(RGB(85, 107, 47));
		for (i = 0; i < 85; i++)
		{
			graphics.DrawLine(0.0f, 255.0f + i, 1250.0f, 255.0f + i);
			graphics.DrawLine(0.0f, 850.0f - i, 1250.0f, 850.0f - i);
		}
	//}
}

void myDraw(Core::Graphics & graphics)
{
	gameBackground(graphics);
	frog.drawThyself(graphics);
	car.drawthyself(graphics);
	car2.drawthyself(graphics);
	car3.drawthyself(graphics);
	car4.drawthyself(graphics);
	car5.drawthyself(graphics);

}

void main()
{
	Core::Init("My Game", 1210, 850);
	Core::RegisterUpdateFn(myUpdate);
	Core::RegisterDrawFn(myDraw);
	Core::GameLoop();
	
}

