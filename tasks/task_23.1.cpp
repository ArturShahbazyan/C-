#include <iostream>

int main() {

  int unsigned n;

  int i = 10;

   std::cin >> n;

  int tmp = n;
   
  while (tmp > 0){
     std::cout << i << " ";
     tmp = n-i;
     i +=1;

   }
}