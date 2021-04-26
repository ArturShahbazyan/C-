/* Задача 9: Փոքրատառ և մեծատառ
Գրել ծրագիր, որը մուտքում ստանում է N թիվը [1, 26] միջակայքից և արտածում 
լատինական այբուբենի N-րդ փոքրատառն ու մեծատառը: (դաս 3)

Примеры
Входные данные
1
Результат работы
a A
Входные данные
2
Результат работы
b B
Входные данные
3
Результат работы
c C */

#include <iostream>

int main() {

  unsigned int n;

  std::cin >> n;

  unsigned int uppercase = 'A' + n -1;
  unsigned int lowercase = 'a'+ n -1;

  char l = lowercase;
  char u = uppercase;

  std::cout << l << " " << u;
}