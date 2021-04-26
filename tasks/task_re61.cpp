#include <iostream>
#include <vector>

std::vector < int > merge(const std::vector<int>& v1,
  const std::vector<int>& v2) {

  std::vector<int> result;

  std::size_t i = 0;
  std::size_t j = 0;

  while (i < v1.size() && j < v2.size()) {

    if (v1[i] >= v2[j]) {
      result.push_back(v1[i++]);
    }
    if (v2[j] >= v1[i]) {
      result.push_back(v2[j++]);
    }
  }

  while (i < v1.size())
    result.push_back(v1[i++]);
  while (j < v2.size())
    result.push_back(v2[j++]);

  return result;

}

std::vector <int> sort(const std::vector <int>& v) {

   if(v.size() <= 1)
    return v;
  auto middle = v.begin() + v.size() / 2;
  std::vector<int> v1(v.begin(), middle);
  std::vector<int> v2(middle, v.end());

  v1 = sort(v1);
  v2 = sort(v2);

  return merge(v1, v2);

}

int main() {

  int n;

  std::cin >> n;

  std::vector <int> v(n);

  for (std::size_t i = 0; i < v.size(); i++) {
     std::cin >> v[i];
  }

  std::vector <int> sorted = sort(v);

  for (std::size_t i = 0; i < sorted.size(); i++) {
     std::cout << sorted[i] << " ";
  }


}