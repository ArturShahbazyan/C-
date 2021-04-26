#include <iostream>

#include <vector>

int main() {

  unsigned int n;

  std::cin >> n;

  std::vector < int > arr(n);

  for (unsigned int i = 0; i < arr.size(); ++i) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < n; ++i) {

    bool wasfound = false;

    for (unsigned int j = 0; j < i; ++j) {

      if (arr[i] == arr[j]) {
        wasfound = true;
        break;
      }
    }

    if (wasfound) 
      continue;
    for (unsigned int j = i + 1; j < n; ++j) {
      if (arr[i] == arr[j]){
         std::cout << arr[i] << " ";
         break;
      }  
    }
  }

}