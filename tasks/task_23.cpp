/* Задача 1: 10֊ից մեծ
Գրել ծրագիր, որը մուտքում կստանա դրական թիվ և կարտածի 10-ից միչև այդ թիվը եղած բոլոր ամբողջ թվերը։ Հայտնի է որ մուտքային թիվը փոքր չէ 10-ից։ Արտածվող թվերը միմյանցից պետք է բաժանված լինեն բացատանիշով։ (դաս 5, 6)

Примеры
Входные данные
10
Результат работы
10
Входные данные
15
Результат работы
10 11 12 13 14 15 */

#include <iostream>

int main() {

     int unsigned n;

     int i = 10;

   std::cin >> n;
   
   while (n >= i){
     std::cout << i << " ";
     i +=1;

   }
}