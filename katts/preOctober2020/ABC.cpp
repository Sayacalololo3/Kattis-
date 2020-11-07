#include <bits/stdc++.h>

using namespace std;

int main(){
    int num[3];
    cin >> num[0] >> num[1] >> num[2];
    string abc;
    cin >> abc;
    int n = sizeof(num)/sizeof(num[0]);
    sort(num,num+n);
    map<char,int> hash;
    hash['A'] = num[0];
    hash['B'] = num[1];
    hash['C'] = num[2];
    for(char i: abc){
        cout << hash[i] << " ";
    }
}