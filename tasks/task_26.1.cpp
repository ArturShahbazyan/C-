#include <iostream>

int main() {


  int n;
  std::cin >> n;

  for(int i=2; i<=n; i++){

    bool b = false;
    for(int j =2; j<=i; j++){

     if (i%j==0 && j!=i) {
        b = true;
        }
    }
     if (b == false) {
         std::cout<<i<<" ";
   }
  }  
}