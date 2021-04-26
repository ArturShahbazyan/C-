#include <iostream>

int main() {


 char str[20];
 char str2[20];

 std::cin >> str;
 std::cin >> str2;

  int length = 0;
  int length2 = 0;

  for (unsigned int i = 0; str[i] != 0; i++){
      length++;
  }

  for (unsigned int i = 0; str2[i] != 0; i++){
      length2++;
  }

   bool isAnagram = true;

  if(length != length2){
    isAnagram = false;
  }

  char tmp;

  for (unsigned int i = 0; i < length; i++){
    for (unsigned int j = i+1; j < length; j++){
      if(str[i] > str[j]) {
            tmp = str[i];
            str[i] = str[j];
            str[j] = tmp;
         }
         if(str2[i] > str2[j]) {
            tmp = str2[i];
            str2[i] = str2[j];
            str2[j] = tmp;
         }
      }  
   }

   for(unsigned int i = 0; i<length; i++) {
      if(str[i] != str2[i]) {    
         isAnagram = false;
      }
   }
    
    if(isAnagram){
      std::cout << "YES" ;
    }else {
      std::cout << "NO" ;
    }

}