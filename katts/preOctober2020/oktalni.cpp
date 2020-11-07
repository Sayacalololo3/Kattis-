#include <bits/stdc++.h>
using namespace std;

string octal(string binary){
    string temp = binary;
    map<string,string> table;
    table["000"] = "0";
    table["001"] = "1";
    table["010"] = "2";
    table["011"] = "3";
    table["100"] = "4";
    table["101"] = "5";
    table["110"] = "6";
    table["111"] = "7";
    
    while(temp.length() % 3 != 0){
        temp = '0' + temp;
    }
    stringstream s;
    stringstream answer;
    for(int i =0;i < temp.length();i++){
        s << temp[i];
        if(s.str().length() == 3){
            answer << table[s.str()];
            s.str("");
        }
    }
    return answer.str();

}


int main() {
    string binary;
    cin >> binary;
    cout << octal(binary);
}