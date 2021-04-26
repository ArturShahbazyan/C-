#include <iostream>

int largestDivider(int a, int b) {

  if(b == 0)
    return a;
  return largestDivider(b, a%b);
} 

int main() {

  int a, b, res;

  std::cin >> a >> b;

  res = largestDivider(a,b);

  std::cout << res;
}
