#include <iostream>


double T(int n, double x) {

  double res;

  if (n == 0)
    return 1;
  else if (n == 1)
    return x;
  return 2 * x * T(n - 1, x) - T(n - 2, x);
}

int main() {

  int n;
  double x;

  std::cin >> n >> x;

  std::cout.precision(5);

  std::cout << std::fixed << T(n, x);
  
}