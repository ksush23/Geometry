#pragma once
class Dot
{
public:
	Dot();
	Dot(double, double);
	void setX(double x);
	double getX();
	void setY(double y);
	double getY();
	double assignment(double a, double b);
	bool comparison(double a, double b);
	double in(double a);
//	void out(string line);
	~Dot();
private:
	double x;
	double y;
};
class Segment
{
public:
	Segment();
	Segment(double, double);
	double assignment(double a, double b);
	bool comparison(double a, double b);
	double in(double a);
//	void out(string line);
	~Segment();
private:
};
void geom(ifstream &is, Dot arrd[10001]);