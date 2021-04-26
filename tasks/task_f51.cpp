#include <iostream>

int PrimeNumber(int n) {

  bool isPrime = true;

  for (int i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      isPrime = false;
      break;
    }
  }

  return isPrime;
}

int main() {

  int n;
  std::cin >> n;

  if (n == 0 || n == 1) {
    std::cout << "NO";
  }else{
    if(PrimeNumber(n)){
      std::cout << "YES";
    }else{
      std::cout << "NO";
    }
  }

}