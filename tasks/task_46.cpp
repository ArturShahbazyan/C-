#include <iostream>

int main() {

 char str[22]= {};

 char c;

 std::cin >> str >> c;

 const char* start;

 for(start = str; *start && *start != c; ++start)
    ;
    std::cout << start+1;
    
} 




/* #include <iostream>

int main() {

 char str[21];
 char symbol;

 std::cin >> str;
 std::cin >> symbol;

 unsigned int length = 0;

 int pos;

  for (unsigned int i = 0; str[i] != 0; i++){
      length++;
  }

  for (unsigned int i = 0; str[i] != 0; i++){
    if(symbol == str[i]){
       pos = i;
    }
  }

  for (unsigned int i = pos+1; i < length; i++){
       std::cout << str[i];
  }
  
}
 */


