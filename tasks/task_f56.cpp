#include <iostream>

int factorial(int n) {

  int res;
  int initial_n = n;

  for (int i = n - 1; i >= 1; i--) {
    n = n * i;
  }

  res = n;

  return res;

}

int fibonacci(int n) {

  int t1 = 0, t2 = 1;

  int nextTerm = 0;

  for (int i = 1; i <= n; ++i) {


    if (i == 2) {
      continue;
    }

    
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

  }
  return nextTerm;
}

int main() {

  int n = 0;

  std::cin >> n;

  double factorialRes = factorial(n);
  double fibonacciRes = fibonacci(n);

  double res = factorialRes / fibonacciRes;

  std::cout.precision(5);

  std::cout << std::fixed << res;
}