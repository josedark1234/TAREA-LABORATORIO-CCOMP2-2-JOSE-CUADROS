#include <iostream>

int main() {
  
  float pi = 3.14159;
  int radio;
  int diametro;
  float area;
  float circunferencia;
  

  std::cout<<"Ingrese el radio: ";
  std::cin>>radio;

  diametro = radio*2;
  area = pi*(radio*radio);
  circunferencia = 2*pi*radio;

  std::cout << "El diametro es: "<< diametro << std::endl;
  std::cout << "El area es: "<< area << std::endl;
  std::cout << "La circunferencia es: "<< circunferencia << std::endl;
  
  return 0;
}