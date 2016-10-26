#include"Rectangle2D.h"

double Rectangle2D::getX() const 
{
	return x;
}

double Rectangle2D::getY() const
{
	return y;
}
double Rectangle2D::setX(double x)
{
	this->x = (x >= 0) ? x : 0;
	return x;
}
double Rectangle2D::setY(double y)
{
	this->y = (y >= 0) ? y : 0;
	return y;
}
double Rectangle2D::getWidth() const
{
	return width;
}
double Rectangle2D::getHeight() const
{
	return height;
}
double Rectangle2D::setWidth(double width)
{
	this->width = (width >= 0) ? width : 0;
	return width;
}
double Rectangle2D::setHeight(double height)
{
	this->height = (height >= 0) ? height : 0;
	return height;
}


Rectangle2D::Rectangle2D()
{
	x = 0;
	y = 0;
	width = 1;
	height = 1;
}
Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
	this->x = x;
	this->y = y;
	this->width = width;
	this->height = height;
}

double Rectangle2D::getArea() const
{
	return width*height;
}

double Rectangle2D::getPerimeter() const
{
	return (2 * width) + (2 * height);
}

bool Rectangle2D::contains(double x, double y) const
{
	return true;
}
bool Rectangle2D::contains(const Rectangle2D &r) const
{
	return true;
}
bool Rectangle2D::overlaps(const Rectangle2D &r) const
{
	return true;
}