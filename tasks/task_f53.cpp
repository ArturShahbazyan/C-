#include <iostream>


double expVal(int n) {

  double res;
  double initial_n = n;

  for(int i = n - 1; i >=1; i--){
    n = n*i;
  }

  res = n / (initial_n + 1);

  return res;

}

int main() {

  int n = 10;

  double res = 0;

  for(int i = 0; i<=10; i++){
     res += expVal(n-i);
  }

  std::cout.precision(5);

  std::cout << std::fixed << res;
}