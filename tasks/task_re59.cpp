#include <iostream>

int K(int i) {

  if (i <=3)
    return i;
  else if (i % 2 != 0 && i > 3)
    return 2*K(i+3);
  else if (i % 2 == 0 && i > 3)
     return 3+K(i/2);

     return 0;
}

int main() {

  int n;

  std::cin >> n;

  std::cout << K(n);
  
}
