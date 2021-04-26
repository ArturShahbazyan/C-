#include <iostream>
#include <vector>

int main() {

unsigned int n;

std::cin >> n;

std::vector<int> arr(n);

int count = 0;

for(unsigned int i = 0; i < arr.size(); i++){
  std::cin >> arr[i];
}

for(unsigned int i = 0; i < arr.size(); i++){
  if(arr[i] % 2 == 0) {
     count++;
  }
}

std::cout << count;

}