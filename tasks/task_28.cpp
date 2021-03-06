/* Задача 6: Ճիշտ K հատ
Պահանջվում է գրել ծրագիր, որը մուտքում կստանա N և K ոչ բացասական ամբողջ թվերը,
ապա հաջորդականություն N ամբողջ տարրերից կազմված։ Ծրագիրը որպես արդյունք պետք 
է արտածի ՛YES՛ եթե N թվերից ճիշտ K հատը մեծ են կամ հավասար 123 ֊ից և ‘NO’ 
հակառակ դեպքում։ Արգելվում է օգտագործել զանգված։ (դաս 5, 6)

Примеры
Входные данные
3 2 123 100 140
Результат работы
YES
Входные данные
0 5
Результат работы
NO
 */
#include <iostream>

int main() {

  unsigned int N;
  unsigned int K;
  std::cin >> N >> K;

  int N1;
  int i = 0;

  while(N > 0){

    N-=1;

    std::cin >> N1;

    if(N1 >= 123){      
      i+=1;
   }
  }

  if(K == i){
    std::cout << "YES";
  }else{
    std::cout << "NO";
  }
}
