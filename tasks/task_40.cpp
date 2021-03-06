/* Задача 18: Ամենամեծ բացասական թիվ
Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է n (n ≤ 1000) բնական թիվ,
ապա a1, a2, a3, ... an ամբողջ թվերի հաջորդականությունը և կարտածի ամենամեծ 
բացասական թիվը և դրա կարգահամարը, այդպիսին չլինելու դեպքում ՛0 -1՛։ 
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)

Примеры
Входные данные
4 4 3 2 1
Результат работы
0 -1
Входные данные
4 10 3 -1 5
Результат работы
-1 2
Входные данные
5 15 1478 -5 -478 -12
Результат работы
-5 2
 */
 
#include <iostream>
#include <limits>

int main() {

  int n;
  std::cin >> n;

  int a[1000];
  int b[1000];

  int k = 0;

  int count = 0;

  for(int i =0; i<n; i++){
    std::cin >> a[i];
  }

  int min = std::numeric_limits<int>::min();

  for(int i = 0; i < n; i++) {
     if(a[i]<0){
      b[k++] = a[i];
    }
  }

  for(int i = 0; i < k; i++) {
     if(min < b[i]){
       min = b[i];
    }
  }

  for (int i = 0; i < n; i++) {
    if(min == a[i]){
      count = i;
      break;
    }  
  }

  if(count == 0){
    min = 0;
    count = -1;
  }

  std::cout << min << " ";
  std::cout << count << " ";

}
  

