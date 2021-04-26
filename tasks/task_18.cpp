/* Задача 16: Փոքր ASCII կոդ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա 2 սիմվոլ ASCII աղյուսակից և 
կարտածի YES, եթե երկրորդ սիմվոլն ունի ավելի փոքր ASCII կոդ քան առաջինը և NO 
հակառակ դեպքում։ Նույն սիմվոլների դեպքում արտածել EQUAL: (դաս 4)

Примеры
Входные данные
b a
Результат работы
YES
Входные данные
x y
Результат работы
NO
Входные данные
^ ^
Результат работы
EQUAL */

#include <iostream>

int main() {

  char ascii_f;
  char ascii_s;

  std::cin >> ascii_f >> ascii_s;
  if(ascii_s < ascii_f)
    std::cout << "YES";
  else if(ascii_s == ascii_f)
    std::cout << "EQUAL";
  else 
    std::cout << "NO"; 
}