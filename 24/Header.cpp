#include <iostream>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;

Dot::Dot()
{
}

Dot::Dot(double, double)
{

}
Dot::~Dot()
{
}
void Dot::setX(double X)
{
	x = X;
}
double Dot::getX()
{
	return x;
}
void Dot::setY(double Y)
{
	y = Y;
}
double Dot::getY()
{
	return y;
}
double Dot::assignment(double a, double b)
{
	return b = a;
}
bool Dot::comparison(double a, double b)
{
	if (a == b)
		return 1;
	return 0;
}
double Dot::in(double a)
{
	cin >> a;
	return a;
}
/*void Dot::out(string line)
{
	cout << line << endl;
}
*/
////////////////////////////

Segment::Segment()
{
}

Segment::Segment(double, double)
{

}
Segment::~Segment()
{
}
double Segment::assignment(double a, double b)
{
	return b = a;
}
bool Segment::comparison(double a, double b)
{
	if (a == b)
		return 1;
	return 0;
}
double Segment::in(double a)
{
	cin >> a;
	return a;
}
/*void Segment::out(string line)
{
	cout << line << endl;
}*/

///////////////////////////////////

void geom(ifstream &is, Dot arrd[10001])
{
	double a, b;
	int i = 0;
	while (is >> a >> b)
	{
		arrd[i].setX(a);
		arrd[i].setY(b);
		i++;
	}
	cout << i << endl;
	for (int j = 0; j <= i; j++)
		cout << arrd[i].getX << ' ' << arrd[i].getY << endl;
}	