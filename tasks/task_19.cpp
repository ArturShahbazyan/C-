/* Задача 17: Պատկանում է միջակայքին
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա A, B, C սահող կետով թվերը։ 
Որպես արդյունք ծրագիրը պետք է արտածի YES, եթե A-ն [B, C) միջակայքից է և 
NO հակառակ դեպքում։ Հայտնի է, որ B֊ն փոքր է քան C֊ն։ (դաս 4)

Примеры
Входные данные
4 5 6
Результат работы
NO
Входные данные
10 5 15
Результат работы
YES
Входные данные
15 5 15
Результат работы
NO */

#include <iostream>

int main() {

    double A = 0;
    double B = 0;
    double C = 0;

   std::cin >> A >> B >> C;
   
   if (A >= B && A < C)
     std::cout << "YES";
   else 
   std::cout << "NO";
}