#include <iostream>

int main() {

    int a = 0;
    int b = 0;
    int c = 0;

   std::cin >> a >> b >> c;
   
   if (a < b){
     if(a<c){
       std::cout << a << "\n";
     }else{
       std::cout << c << "\n";
     }

   }else{
      if(b<c){
       std::cout << b << "\n";
     }else{
       std::cout << c << "\n";
     }
   }
    
}