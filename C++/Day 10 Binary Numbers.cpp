#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

void binary(int num){
    int count = 0;
    int maxCount = 0;
    
    while(num != 0){
        
        if(num % 2 == 1){
            count++;
            if(maxCount < count){
                maxCount = count;
            }
        }
        else{
            count = 0;
        }
        num /= 2;
    }
    cout<<maxCount;
}

int main(){
    int n;
    cin >> n;
    binary(n);
    return 0;
}