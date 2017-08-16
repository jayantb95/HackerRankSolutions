#include <bits/stdc++.h>

using namespace std;

int factorial(int num){
    if(num > 1){
        return (num * factorial(num - 1));
    }
    else{
        return num;
    }
}
    

int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;    
}