/* Задача 12: Երկուսից մեծը
Գրել ծրագիր, որը մուտքում կստանա 2 դրական ամբողջ թիվ և կարտածի այդ թվերց մեծը։ (դաս 4)

Примеры
Входные данные
1 5
Результат работы
5
Входные данные
2 2
Результат работы
2 */

#include <iostream>

int main() {

   unsigned int a = 0;
   unsigned int b = 0;

   std::cin >> a >> b;
   
   if (a > b)
     std::cout << a;
   else
    std::cout << b;
     
}