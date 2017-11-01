#include<iostream>
#include<cmath>

struct Vector2D
{
  double x{0.0}, y{0.0};
  Vector2D operator+(const Vector2D &v2);
  Vector2D operator-(const Vector2D &v2);
  Vector2D operator*(const Vector2D &v1,const Vector2D &v2, double p);

};
