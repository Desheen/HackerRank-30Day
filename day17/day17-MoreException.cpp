#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>

class negative_power : public std::exception 
{
    const char* what() const noexcept {
      return "n and p should be non-negative";
    }
} neg_power;
//Write your code here
struct Calculator {
  Calculator() {}
  int power(int n , int p ) {
      if ( n  < 0 || p < 0 )
        throw neg_power;
      else if( p == 0 )
        return 1;
      else
        return n * std::pow(n,p-1);
  }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;

    std::cin >> T;

    while(T-->0)
    {
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               std::cout << ans << std::endl; 
         }
         catch(std::exception& e){
             std::cout << e.what() << std::endl;
         }
      }
    }
    
}
