/*
created by Muhammad Yasir
Namefile: fibonacci.cpp
show fibonacci
Date: 31.06.2019
*/

#include <iostream>

int fibonacci(int );

int main () {
   // Local variable declaration:
   int number;

    std::cout<<"Input Number: ";
    std::cin>>number;

   // while loop execution
   for (int i = 0; i <= number; i++){
        std::cout<<fibonacci(i)<<" ";
   }

   return 0;
}

int fibonacci(int n ){

    if(n == 0)
        return 0;
    else if(n == 1)
      return 1;
   else
      return fibonacci(n - 1) + fibonacci(n - 2);
}
