#include <iostream>

int main() {
  int n1;
  int n2;
  int suma;
  
  std::cout<<"Ingrese un nuemero entero: ";
  std::cin>>n1;
  std::cout<<"Ingrese un nuemero entero: ";
  std::cin>>n2;

  suma = n1 + n2;

  if (suma%2 == 0){
    std::cout<<"La suma es par";
  }
  else{
    std::cout<<"La suma es impar";
  }
  return 0;
}