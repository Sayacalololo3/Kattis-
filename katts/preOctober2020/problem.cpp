#include <iostream>
#include <string>

using namespace std;

void lower( string& line){
    for(int i = 0;i<line.length();i++){
        line[i] = tolower(line[i]);
    }
}

int main(){
    string line;
    while(getline(cin,line)){
        lower(line);
        cout << (line.find("problem") != string::npos ? "yes\n":"no\n");
    }   
}