#include <iostream>
#include <vector>
#include <cmath>

int main() {

  unsigned int n;

  unsigned int b = 0;
  unsigned int c = 1;


  std::cin >> n;

  std::vector < int > a(n);

  for (unsigned int i = 0; i < n; ++i) {
    std::cin >> a[i];
  }

  for (int i = 0; i < n; ++i) {  

    for (unsigned int j = i+1; j < n; ++j) {
       if(std::abs(a[i] + a[j]) < std::abs(a[b] + a[c])){
         b = i;
         c = j;
       }
    } 
 
  }
std::cout << a[b] << " " << a[c];

}