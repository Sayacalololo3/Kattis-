#include <bits/stdc++.h>

using namespace std;

int main() {
    int test;
    cin >> test;
    stringstream lines;
    for(int i =0;i<test;i++){
        int s,d;
        cin >> s >> d;
        int num1 = (s+d)/2;
        int num2 = s - num1;
        if(num2 >= 0 && num1 + num2 == s && abs(num1 - num2) == d){
            lines << num1 << " " << num2 << endl;
        }
        else{
            lines << "impossible\n";
        }
    }
    cout << lines.str();
}   