#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

//Write your code here

class myException: public exception{
    virtual const char* what() const throw(){
        return "n and p should be non-negative";
    }
}myex;

class Calculator: public myException{
    private: 
    int num;
    int exp;
    
    public:
    
    int power(int num, int exp){
        this->num = num;
        this->exp = exp;
        int result = 1;
        
        if(num < 0 || exp < 0){
            
            throw myex;
        }
        else{
            
            return pow(num, exp);
        }
    }
};

int main()
{
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}