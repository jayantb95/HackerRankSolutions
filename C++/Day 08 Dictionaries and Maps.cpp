#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

//declaration of the map 
typedef map<string, int> phoneMap;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string name;
    int number;    
    phoneMap phone;
    
    
    cin >> n;
    
    
    for(int i = 0 ; i < n ; i ++){
        cin >> name;
        cin >> number;
        phone[name] = number;
    }
    
    phoneMap::iterator it;

    
    while(cin >> name) {
        if (phone.find(name) != phone.end()) {
            cout << name << "=" << phone.find(name)->second << endl;
        }
        else {
            cout << "Not found" << endl;
        }
    }
    return 0; 
}