
//This program models a two dimensional vector
//Compilar con g++ -std=c++11 

#include <iostream>
#include<vector>

struct Vector2D
{ double x{0.0}, y{0.0}; //Inicializacion de las variables 
};

int main (void)
{
  Vector2D a; //Crear un objeto que representa los double, vector a tiene su x y su y
  std::cout<<"Size of a double:  "<<sizeof(double)<<std::endl;
  std::cout<<"Size of a Vector2D:  "<<sizeof(Vector2D)<<std::endl;
  std::cout<<"a_x= "<<a.x<<std::endl;  //a.x permite acceder al valor de la variable"
  std::cout<<"a_y= " <<a.y<<std::endl;
  a.x= 2.0; a.y= -5.7;
  std::cout<<"a_x= "<<a.x<<std::endl;  //a.x permite acceder al valor de la variable"
  std::cout<<"a_y= " <<a.y<<std::endl;
  
  
  return 0;
}
