#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        string str;
        string s1, s2;
        cin >> str;
        for(int j = 0 ; j < str.size() ; j++){
            if( j % 2 == 0){
                s1 += str[j];
            }
            else{
                s2 += str[j];
            }
        }
        cout << s1 << " " << s2 <<endl;
    }
    return 0;
}