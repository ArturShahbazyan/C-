#include <iostream>

int add(int a, int b) {
  return a + b;
}

int subtract(int a, int b) {
  return a - b;
}

int multiply(int a, int b) {
  return a * b;
}

int divide(int a, int b) {
  return a / b;
}

int balance(int a, int b) {
  return a % b;
}

int main() {

  int a, b;
  char o;
  std::cin >> a >> b >> o;

  if (o == '+') {
    std::cout << add(a, b);
  } else if (o == '-') {
    std::cout << subtract(a, b);
  } else if (o == '*') {
    std::cout << multiply(a, b);
  } else if (o == '/') {
    std::cout << divide(a, b);
  } else if (o == '%') {
    std::cout << balance(a, b);
  }

}