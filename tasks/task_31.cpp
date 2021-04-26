/* Задача 9: Մաքսիմալի հաճախակիություն
Գրել ծրագիր, որը մուտքում ստանում է N ոչ բացասական ամբողջ թիվ, 
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Որպես արդյունք 
ծրագիրը պետք է արտածի հաջորդականությունում մաքսիմալ տարրի հանդիպելու քանակը։
 Արգելվում է օգտագործել զանգված։ (դաս 5, 6)

Примеры
Входные данные
0
Результат работы
0
Входные данные
5 2 6 6 3 -5
Результат работы
2
Входные данные
10 -1 -1 -1 -1 -1 -1 -1 -1 -1 -1
Результат работы
10 */

#include <iostream>
#include <limits>

int main() {

  int num1 = std::numeric_limits<int>::min();
  int num2 = std::numeric_limits<int>::min();

  unsigned int n;

  std::cin >> n;

  int count = 0;

  for(int i=0; i<n; ++i){
 
  int x;
  std::cin >> x;

if(x > num1){
        num1 = x;
      }

      if(num1 > num2){
        int tmp = num1;
        num1 = num2;
        num2 = tmp;
        count = 1;
      }

      if(x == num1){
        count+=1;
      }
 }
 
 std::cout << count;

}