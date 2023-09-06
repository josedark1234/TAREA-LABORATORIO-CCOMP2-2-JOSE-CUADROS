#include <iostream>

int main() {
  char c;

  std::cout<<"Ingrese un caracter: ";
  std::cin>>c;

  std::cout<<"El valor es: "<<static_cast<int>('c');
  return 0;
}