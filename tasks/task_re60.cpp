#include <iostream>
#include <vector>

std::vector < int > merge(const std::vector < int > & v1,
  const std::vector < int > & v2) {

  std::vector < int > result;

  std::size_t i = 0;
  std::size_t j = 0;

  while (i < v1.size() && j < v2.size()) {

    if (v1[i] <= v2[i]) {
      result.push_back(v1[i++]);
    }
    if (v2[j] <= v1[i]) {
      result.push_back(v2[j++]);
    }
  }

  while (i < v1.size())
    result.push_back(v1[i++]);
  while (j < v2.size())
    result.push_back(v2[j++]);

  return result;

}

int main() {

  unsigned int n = 10;

  std::vector < int > v1(n);
  std::vector < int > v2(n);

  for (std::size_t i = 0; i < v1.size(); ++i) {
    std::cin >> v1[i];
  }

  for (std::size_t i = 0; i < v2.size(); ++i) {
    std::cin >> v2[i];
  }

  std::vector < int > merged = merge(v1, v2);

  for (std::size_t i = 0; i < merged.size(); ++i) {
    std::cout << merged[i] << " ";
  }

}