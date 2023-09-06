#include <iostream>

int main() {
  for(int i = 1; i<= 8; i++){
    if(i==1 || i%2!=0){
      std::cout<<"* * * * * * * *\n";
    }
    else{
      std::cout<<" * * * * * * * *\n";
    }
  }
}