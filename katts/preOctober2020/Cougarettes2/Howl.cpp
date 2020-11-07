#include <bits/stdc++.h>
using namespace std;

int main(){

    string howl;
    cin >> howl;
    int a = 0;
    string answer;
    for(char i:howl){
        if(i == 'A'){
            a++;
        }
    }
    while(a--){
        answer.append("AW");
    }

    answer.append("H");

    for(int i = answer.length();i < howl.length() + 1;i++){
        answer.append("O");
    }
    cout << answer;
}