#include <iostream>

int main() {


  std::cout << "LONGITUD(Cm) \t\t";
  std::cout << "ÁREA DE LA SUPERFICIE(Cm^2) \t\t";
  std::cout << "VOLUMEN(Cm^3)\n";



  for(int i= 0; i <= 4; i++){
    std::cout << "\t" << i << "\t\t\t\t\t\t\t"<< (i*i)*6 << "\t\t\t\t\t\t\t" <<  i*i*i << "\n";

  }
}