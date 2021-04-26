#include <iostream>

int main() {

  char str[21];
  char substr[21];

  std::cin >> str >> substr;

  std::size_t size = 0;
  for (const char* p = str; *p; ++p) {
    ++size;
  }

  std::size_t substrSize = 0;
  for (const char* p = substr; *p; ++p) {
    ++substrSize;
  }

  bool found = false;

  for (unsigned int i = 0; i < size - substrSize + 1; ++i){

    found = true;
    for (unsigned int j = 0; j < substrSize; ++j) {
      if (str[i + j] != substr[j]) {
        found = false;
        break;
      }
    }
    if (found) {
      break;
    }
  }

  std::cout << (found ? "YES\n" : "NO\n");

}
