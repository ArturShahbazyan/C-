/* Задача 3: Միջակայքի 7֊ի բազմապատիկներ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա A և B ամբողջ թվերը և կարտածի
[A, B] միջակայքի բոլոր այն թվերի քանակը, որոնք առանց մնացորդի բաժանվում են 7֊ի։ 
(դաս 5, 6)

Примеры
Входные данные
7 13
Результат работы
1
Входные данные
5 21
Результат работы
3
Входные данные
-8 -5
Результат работы
1 */

#include <iostream>

int main() {
  
int A;
int B;

std::cin >> A >> B;

 int i = 0;
 while(A <= B){

    A +=1;
   if(A % 7 == 0) {
     i += 1;     
   }
 
 }
  std::cout << i;
}