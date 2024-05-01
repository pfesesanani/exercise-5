/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cmath>
using namespace std;
double distance(){
    

    double x1;
    double a;
    double y1;
    double b; 
    
   
    std::cout<<"enter x1"<<std::endl;
    std::cin>>x1;
    std::cout<<"enter a"<<std::endl;
    std::cin>>a;
    std::cout<<"enter y1"<<std::endl;
    std::cin>>y1;
    std::cout<<"enter b"<<std::endl;
    std::cin>>b;
  double distance=std::sqrt(std::pow(x1-a,2)+std::pow(y1-b,2)); }
  int main() {
double metres=distance();
std::cout<<"the distance between point 1 and point 2 is"<<metres<<std::endl;
    return 0;
}
