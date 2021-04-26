#include <iostream>
#include <cmath>

double triangularArea(double a, double b, double c) {

  double p, area;

  p = (a + b + c) / 2;
  area = sqrt(p * (p - a) * (p - b) * (p - c));

  return area;

}

int main() {

  double a, b, c, area;

  std::cin >> a >> b >> c;

  area = triangularArea(a, b, c);

  std::cout << area;

}