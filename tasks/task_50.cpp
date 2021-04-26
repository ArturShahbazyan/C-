#include <iostream>

#include <vector>

int main() {

  unsigned int n;

  std::cin >> n;

  std::vector < int > arr(n);

  int count = 1;
  int max = 1;

  for (unsigned int i = 0; i < n; i++) {
    std::cin >> arr[i];
  }

  for (unsigned int i = 1; i < n; i++) {

    if (arr[i] > arr[i - 1]) {

      count++;
    } else {
      if (max < count) {
        max = count;
      }
      count = 1;
    }
  }

  if (max < count) {
    max = count;
  }

  std::cout << max;

}