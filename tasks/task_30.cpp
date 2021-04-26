/* Задача 8: Թոփ եռյակ
Գրել ծրագիր, որը մուտքում ստանում է N (N ≥ 3) բնական թիվ, ապա հաջորդականություն
N ամբողջ տարրերից կազմված։ Որպես արդյունք ծրագիրը պետք է արտածի հաջորդականության 
3 ամենամեծ տարրերը։ Տարրերը պետք է արտածել փոքրից մեծ և տարանջատել բացատանիշներով։ 
Արգելվում է օգտագործել զանգված։ (դաս 5, 6)

Примеры
Входные данные
3 1 2 3
Результат работы
1 2 3
Входные данные
5 2 -4 16 0 15
Результат работы
2 15 16 */
#include <iostream>
#include <limits>

int main() {

  int max1 = std::numeric_limits<int>::min();
  int max2 = std::numeric_limits<int>::min();
  int max3 = std::numeric_limits<int>::min();

  int x;

  std::cin >> x;
  
  for(unsigned int i=0; i<x; ++i){

    int n;
    std::cin >> n;
      if(n > max1){
        max1 = n;
      }

      if(max1 > max2){
        int tmp = max1;
        max1 = max2;
        max2 = tmp;
      }

      if(max2 > max3){
       int tmp = max2;
        max2 = max3;
        max3 = tmp;  
      }
 }
 std::cout << max1 << " " << max2  << " " << max3;

}