#pragma once
class Rectangle2D
{
private:
	double x;
	double y;
	double width;
	double height;
public:
	double getX() const;
	double getY() const;
	double setX(double x);
	double setY(double x);
	double getWidth() const;
	double getHeight() const;
	double setWidth(double width);
	double setHeight(double height);
	Rectangle2D();
	Rectangle2D(double x, double y, double width, double height);
	double getArea() const;
	double getPerimeter() const;
	bool contains(double x, double y) const;
	bool contains(const Rectangle2D &r) const;
	bool overlaps(const Rectangle2D &r) const;


};