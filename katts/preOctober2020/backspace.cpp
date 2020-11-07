#include <bits/stdc++.h>

using namespace std;




int main() {
    string word;
    cin >> word;
    string answer;
    for(char i:word){
        if(i == '<'){
            answer.pop_back();
        }
        else{
            answer.push_back(i);
        }
    }
    cout << answer;  
}