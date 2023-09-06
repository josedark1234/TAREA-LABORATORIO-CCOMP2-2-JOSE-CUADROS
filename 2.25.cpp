#include <iostream>

int main() {
  int n1;
  int n2;
  int n3;

  std::cout<< "Ingrese un numero: ";
  std::cin>>n1;
  std::cout<< "\nIngrese un numero: ";
  std::cin>>n2;
  std::cout<< "\nIngrese un numero: ";
  std::cin>>n3;

  if(n3%n1==0 && n3%n2==0){
    std::cout<<"Los 2 primeros numeros son factores del ultimo termino";
  }
  else{
    std::cout<<"Los 2 primeros numeros no son factores del ultimo termino";
  }
  return 0;
}