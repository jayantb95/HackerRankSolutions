#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class AdvancedArithmetic{
    public:
        virtual int divisorSum(int n)=0;
};

//Write your code here
class Calculator: public AdvancedArithmetic{
    private:
    int num;
    public:
    int divisorSum(int num){
        int divSum;
        for(int i = 1 ; i <= num ; i++){
			//loop started from 1 cz 0 can't divide any integer
            if(num % i == 0)
                divSum += i;
        }
        return divSum;
    }
};

int main(){
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator(); 
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n" << sum;
    return 0;
}