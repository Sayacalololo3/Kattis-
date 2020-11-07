#include <bits/stdc++.h>

using namespace std;


int main(){
    int test,mail,crackers;
    cin >> test;
    int exp[test];
    for(int i=0;i<test;i++){
        cin >> mail >> crackers;
        exp[i] = ((crackers+mail)*crackers)/(2);
    }
    for(int i=0;i<test;i++){
        cout << exp[i] << endl;
    }
}