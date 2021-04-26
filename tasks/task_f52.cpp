#include <iostream>

long long int Binary(int n) {

  unsigned long long int res = 0;

  for (unsigned long long int power = 1; n; power *= 10, n /= 2) {
    res += power * (n % 2);

  }
  return res;
}

int main() {

  unsigned long long int n;
  std::cin >> n;

  unsigned long long int result = Binary(n);

  std::cout << result;

}