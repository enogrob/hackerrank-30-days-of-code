#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<s[i].length();j+=2){
            cout << s[i][j];
        }
        cout << " ";
        for(int j=1;j<s[i].length();j+=2){
            cout << s[i][j];
        }
        cout << "\n";
    }
    return 0;
}
