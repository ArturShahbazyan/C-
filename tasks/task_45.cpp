#include <iostream>

int main() {


 char str[20];
 char reverseStr[20];

  std::cin >> str;

  int length = 0;

  bool isPalindrom = false;

  for (unsigned int i = 0; str[i] != 0; i++){
      length++;
  }

  for (unsigned int i = 0; i < length/2; i++){
      str[i] = str[i];
      reverseStr[i] = str[length-i-1];
   }

   for(unsigned int i = 0; i<length/2; i++) {
      if(str[i] == reverseStr[i]) {    
         isPalindrom = true;
      }
   }
    
    if(isPalindrom){
      std::cout << "YES";
    }else {
      std::cout << "NO";
    }

}