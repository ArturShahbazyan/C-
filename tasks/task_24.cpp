/* Задача 2: Միջակայքի զույգ թվեր
Գրել ծրագիր, որը մուտքում կստանա A և B ամբողջ թվերը և կարտածի [A, B] միջակայքի 
բոլոր զույգ թվերը։ Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։
(դաս 5, 6)

Примеры
Входные данные
1 5
Результат работы
2 4
Входные данные
4 4
Результат работы
4
Входные данные
-7 -5
Результат работы
-6 */

#include <iostream>

int main() {

   int A;
   int B;

   std::cin >> A >> B;

   while (A <= B){
     if(A % 2 == 0){
      std::cout << A << " ";
     }
     A +=1;
   }
}

