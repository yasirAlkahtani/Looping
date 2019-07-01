/*
created by Muhammad Yasir
Namefile: prima.cpp
show prima number which smaller then number
Date: 31.06.2019
*/

#include <iostream>

int main () {
   // Local variable declaration:
   int prima, check = 0,i = 1;

    std::cout<<"Input Number: ";
    std::cin>>prima;

   // while loop execution
   while(i <= prima) {
        if(prima%i==0)check++;
    i++;
   }
   if (check==2)std::cout<<"PRIMA"<<std::endl;
   else std::cout<<"Not PRIMA"<<std::endl;

   return 0;
}
