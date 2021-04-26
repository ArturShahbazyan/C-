// harc std::cin >> max stipum enq vor tiv@ mutqagrvi heto mtni cikl

/* #include <iostream>

int main() {

   int max;

   //std::cin >> max;

   unsigned int i = 1;

   while (i < 10){

    int n;

    std::cin >> n;

    if(n > max)
      max = n;
      i+=1;
   }
    std::cout << max;
   } */

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




#include <iostream>

int main(void)
{
	int NUM[10]; // define a 10-element array of type int
	bool isprime; // define a bool to check if a number is tell the user what this program does
	
	for(int counter=0;counter<10;counter++) // initialize the 10-element array by getting numbers from the user and storing them in the array
	{
  
		std::cin>>NUM[counter]; // get the number

	}
	
	for(int outer=1;outer<10;outer++) // we need this outer loop to loop through the 10 elements in the array
	{
		isprime=true; // set isprime to true
		for(int inner=2;inner<NUM[outer];inner++) // we need this inner loop to loop through the numbers between 2 and one less than the user number
		{
			if(NUM[outer]%inner==0) // if we found a divisor that is not 1 and the number, this number is not prime
			{
				isprime=false; // set the checker to false, so we don't print out the composite number
				break; // we don't need to check any more divisors because we know the number is a composite
			}
		}
		if(isprime) // if the number is prime, print it out
		{
			std::cout<<"Element #"<<outer+1<<": "<<NUM[outer]<<" is prime."<<std::endl;
		}
	}
	
	std::cin.ignore(); // keep the program open so the user can read the output until he/she hits the 'Enter' key
	return(0); // exit safely
}