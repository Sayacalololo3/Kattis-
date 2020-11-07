#include <bits/stdc++.h>

using namespace std;


bool journey(string line){
    stack<char> items;

    for(char i:line){
        if(i == '$' || i == '*' || i =='|'){
            items.push(i);
        }
        else if(i == 't'){
            if(items.empty()){
                return false;
            }
            if(items.top() != '|'){
                return false;
            }
            items.pop();
        }
        else if(i == 'j'){
            if(items.empty()){
                return false;
            }
            if(items.top() != '*'){
                return false;
            }
            items.pop();
        }
        else if(i == 'b'){
            if(items.empty()){
                return false;
            }
            if(items.top() != '$'){
                return false;
            }
            items.pop();
        }
    }
    return items.empty();
}






int main() {
   int count;
   cin >> count;
   string line;
   cin.ignore();
   stringstream answer;
   while(count--){
       getline(cin,line);
       answer << (journey(line) ?"YES":"NO") << endl;
   }
   cout << answer.str();
}