#include <bits/stdc++.h>

using namespace std;

int main(){
    long a ,b;
    string line;
    stringstream s;
    while(getline(cin,line) && !line.empty()){
        int index = line.find_first_of(" ");
        long a = stol(line.substr(0,index));
        long b = stol(line.substr(index+1,line.length()));
        if(a < b){
            s << b - a << endl;
        }
        else{
             s << a - b << endl;
        }
    }
    cout << s.str();
    
}