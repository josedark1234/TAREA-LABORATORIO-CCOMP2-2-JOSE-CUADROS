#include <iostream>

int main() {
  
  int n[5];
  int N = n[0];
  
  for(int i=1; i<=5; i++){
    std::cout<<"Ingrese un numero: ";
    std::cin>>n[i];
  }
  for(int a=1; a<=5; a++){
    if(N>n[a]){
      continue;
    } 
    else{
      N=n[a];
    }
  }
  std::cout<<"El numero mayor es :" << N << "\n";
  for(int b=1; b<=5; b++){
    if(N<n[b]){
      continue;
    } 
    else{
      N=n[b];
    }
  }
  std::cout<<"El numero menor es :" << N;
  return 0;
}