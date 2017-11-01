//This program models a two dimensional vector
//Compilar con g++ -std=c++11 

#include <iostream>
#include<vector>
#include<cmath>

struct Vector2D
{
  //Variable
  double x{0.0}, y{0.0}; //Inicializacion de las variables 

  //funciones
  double norm(void); //Recide void porque la funcion es interna y ya conoce el x y el y, por tanto no hay que ponerlos para que los recida
 
};

double Vector2D::norm(void) //el Vector2D:: se debe poner para indicar que la funcion norm es una funcion de Vector2D y así pueda operar la "x" y la "y" OJO!!!
{
  return std::sqrt(x*x + y*y);
}

int main (void)
{
  Vector2D a; //Crear un objeto que representa los double, vector a tiene su x y su y

  a.x= 2.0; a.y= -5.7;
  std::cout<<"a_x= "<<a.x<<std::endl;  //a.x permite acceder al valor de la variable"
  std::cout<<"a_y= " <<a.y<<std::endl;
  std::cout<<"|a|=  "<<a.norm()<<std::endl;
  
  return 0;
}
