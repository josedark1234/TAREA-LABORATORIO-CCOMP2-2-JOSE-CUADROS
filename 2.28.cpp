#include <iostream>

int main() {
  int n;

  std::cout<<"Digite un numero de 4 cifras: ";
  std::cin>>n;

  int n1;
  n1 = (n%10);
  n = n/10;
  int n2;
  n2 = (n%10);
  n = n/10;
  int n3;
  n3 = (n%10);
  n= n/10;
  int n4;
  n4 = (n%10);

  std::cout<<n1<<"  "<<n2<<"  "<<n3<<"  "<<n4;
  return 0;

  /*
  o tambien se puede hacer con for
    for(int i = 0; i <= 3; i++){
    std::cout << n % 10 << "  ";
    n = n / 10;
  */
}