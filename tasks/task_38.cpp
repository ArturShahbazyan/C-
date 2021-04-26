/* Задача 16: Պարզ թվերի քանակ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա n (n ≤ 100) բնական թիվ, 
ապա a0, a1, a2, ... an-1 ամբողջ թվերի հաջորդականությունը և կարտածի
b0, b1, b2, ... bn-1։ Որտեղ bi -ն ai -ից փոքր պարզ թվերի քանակն է։
Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։
Խնդիրը լուծելիս օգտագործել զանգված։ (դաս 7)

Примеры
Входные данные
5 1 2 3 4 5
Результат работы
0 0 1 2 2
Входные данные
11 2 3 5 7 11 13 17 19 23 29 31
Результат работы
0 1 2 3 4 5 6 7 8 9 10 */

#include <iostream>

int main() {

  int n;

  std::cin >> n;

  int a[100];

  for(unsigned int i = 0; i<n; i++){
    std::cin >> a[i];
  }

  for(unsigned int i = 0; i<n; i++){
    int primeCount = 0;
    for(unsigned int j = 2; j<a[i]; j++){
      bool isPrime = true;
      for(unsigned int k = 2; k*k<=j; k++){
        if(j%k == 0){
          isPrime = false;
          break;
        }       
       }
      if(isPrime){
       primeCount++;
     }
    }
    std::cout << primeCount << "\n";
  }
}