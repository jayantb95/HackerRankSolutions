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
using namespace std;


int main(){
    int n;
    cin >> n;
    
    if( n % 2 != 0){
        cout << "Weird";
    }
    else if(n % 2 == 0 && n >= 2 && n <= 5){
        cout << "Not Weird";
    }
    else if(n % 2 == 0 && n >= 6 && n <= 20){
        cout << "Weird";
    }
    else if(n % 2 == 0 && n > 20){
        cout << "Not Weird";
    }
    else if(n < 1 || n > 100){
        cout << "wrong input";
    }
    return 0;
}
