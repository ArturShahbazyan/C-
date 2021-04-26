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

    unsigned int count = 0;

    for (unsigned int j = 0; j < n; ++j) {

      if (arr[i] == arr[j]) {
        count++;
      }
    }

   std::cout << count << " ";
   
  }

}