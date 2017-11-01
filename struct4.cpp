//Operator Overloading

//¿Como aperar Vectores de una estructura?
//Hay tres formas:

//Primero: escribir la función a mano (explicitamente)
//Segundo: Escribir una funcion general que lo haga
//Tercero: Sobre Cargar el operador

#include <iostream>
#include<cmath>

struct Vector2D
{
  double x{0.0}, y{0.0};
  Vector2D operator+(const Vector2D &v2);
  Vector2D operator-(const Vector2D &v2);
  Vector2D operator*(const Vector2D &v1,const Vector2D &v2, double p);

};

 Vector2D Vector2D::operator+(const Vector2D &v2)
  {
    Vector2D tmp;
    tmp.x= x+ v2.x; //este primer x es el que esta llamando la suma
    tmp.y= y+v2.y;
    return tmp;
  }

Vector2D Vector2D::operator-(const Vector2D &v2)
  {
    Vector2D tmp;
    tmp.x= x- v2.x; //este primer x es el que esta llamando la suma
    tmp.y= y-v2.y;
    return tmp;
  }

Vector2D Vector2D::operator*(const Vector2D &v1, const Vector2D &v2, double p)
{
  double dotproduct;
  dotproduct=(v1.x*v2.x) + (v1.y*v2.y);
     return dotproduct;
}
  
  
void print(const Vector2D &v); //Funcion para la primera forma
void add(const Vector2D & v1, const Vector2D &v2, Vector2D &v3); //Funcion para la segunda forma


int main (void)
{
  Vector2D a,b,c;
  double dp;
  a.x=2.0; a.y=-5.7;
  b.x=3.2; b.y= 1.7;

  //Primera forma (Explicita)
  c.x= a.x + b.x;
  c.y= a.y + b.y;

  //Segunda forma
  add(a,b,c);

  //Tercera forma
  c=a+b; // es lo mismo que c=a.operator+(b)
  C=a-b;
  dp=a*b;
  
  
  
  //Print
  print(a);
  print(b);
  print(c);
 
  
  return 0;
}

void print(const Vector2D &v)
{
  std::cout<<"( "<<v.x<<","<<v.y<<","<< ")"<<std::endl;
}

void add(const Vector2D & v1, const Vector2D &v2, Vector2D &v3)
{
  v3.x= v1.x+ v2.y;
  v3.y= v1.y+ v2.y;
}


