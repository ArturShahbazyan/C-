/* Պահանջվում է գրել ծրագիր, որը մուտքում ստանում է n (n ≤ 1000) 
բնական թիվ, ապա a0, a1, a2, ... an-1 ամբողջ թվերի հաջորդականությունը
և կարտածի b0, b1, b2, ... b(n-1)/2։ Որտեղ bi = ai + an - i - 1։ Արտածվող
թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ Խնդիրը լուծելիս օգտագործել 
զանգված։ (դաս 7)

Примеры
Входные данные
9 1 2 3 4 5 6 7 8 9
Результат работы
10 10 10 10
Входные данные
6 1 5 10 15 -20 30
Результат работы
31 -15 25 */

#include <iostream>

int main() {

   int n;

   std::cin >> n;

  int a[1000];
  int b[1000];

  int k = 0;
  
   for (int i = 0; i < n; i++) {
     std::cin >> a[i];    
  }

  for (int i = 0; i < n/2; i++) {
    b[k++] = a[i] + a[n-i-1];    
  }

  for (int i = 0; i < k; i++) {
    std::cout << b[i] << " ";     
  } 
}