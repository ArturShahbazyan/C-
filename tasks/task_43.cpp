/*
#include <iostream>
#include <string>

int main() {

  std::string str;

  std::cin >> str;

  std::size_t length = std::size(str);

  std::cout << length << "\n";
} 
*/

#include <iostream>

int main() {

 char str[20];

 std::cin >> str;

 int length = 0;

 for (unsigned int i = 0; str[i] != 0; i++){
      length++;
  }
           
  std::cout << length;

}
