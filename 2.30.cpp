#include <iostream>

int main() {
  int seleccion;
  float peso;
  float altura;
  float resultado;


  std::cout << "Ingrese su peso: ";
  std::cin >> peso;
  std::cout << "Ingrese su altura: ";
  std::cin >> altura;

  resultado = (peso)/(altura*altura);

  resultado = resultado*703;

  std::cout << "Su IMC es: " << resultado << "\n";

  if(resultado <= 18.5){
    std::cout << "FLACO";}
  if(resultado > 18.5 && resultado <= 24.9){
    std::cout << "NORMAL";}
  if(resultado > 24.9 && resultado <= 29.9){
    std::cout << "SOBREPESO"; }
  if(resultado >= 30){
    std::cout << "OBESO";}


}