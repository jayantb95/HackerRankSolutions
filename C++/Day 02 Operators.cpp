#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    float a, b, c, d, e, sum;
    cin >> a;
    cin >> b;
    cin >> c;
    
    d = a * (b/100);
    e = a * (c/100);
    
    
    
    sum = a + d + e + 0.5;
    sum = (int) sum;
    cout << "The total meal cost is " << sum << " dollars.";

    return 0;
}