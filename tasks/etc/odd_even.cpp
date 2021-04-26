#include <iostream>

int main() {

  const unsigned int n = 10;

  int a[n];


  for (int i = 0; i < n; i++) {
    std::cin >> a[i];     
  }

  int even[n] = {};
  int odd[n] = {};

  unsigned int j = 0;
  unsigned int k = 0;
 
    for (unsigned int i = 0; i < n; i++) { 
       if(a[i] % 2 == 0){
         even[j++] = a[i];
       }else {
         odd[k++] = a[i];
       }
    }

  for (int i = 0; i < j; i++) {
    std::cout << even[i] << " ";     
  }
  for (int i = 0; i < k; i++) {
    std::cout << odd[i] << " ";     
  }
}