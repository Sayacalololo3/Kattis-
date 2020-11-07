#include <bits/stdc++.h>
using namespace std;

string translate(map<string,string> ,string);

int main(){
 
    map<string,string> m;
    m["bea"] = m["bee"] = "b";
    m["be"] = "b";
    m["four"] = "4";
    m["for"] = m["For"] = "4";
    m["at"] = m["At"] = "@";
    m["and"] =  m["And"] = "&";
    m["one"] = m["won"] = m["Won"]= m["One"] =  "1";
    m["Two"] =  m["Too"]  = m["two"] = m["too"] = "2";
    m["to"]  = "2";
    m["sea"] = m["see"] =  "c";
    m["eye"] = "i";
    m["owe"] = "o";
    m["oh"] = "o";
    m["are"] = "r";
    m["you"]  = "u";
    m["why"] = "y";


    string word;
    string other;
    int test;
    cin >> test;
    cin.ignore();
    for(int i =0;i<test;i++){
        getline(cin,other);
        other += " ";
        while(!other.empty()){
            int index = other.find_first_of(" ");
            word += translate(m,other.substr(0,index)) + " ";  
            other.erase(0,index+1); 
        }
        word += "\n";         
    }
    cout << word;
}

string translate(map<string,string> m,string str){
    string temp = str;
    for( pair<string,string> i: m){
        if(temp == i.first){
            temp = i.second;
            break;
        }
        if(temp.find(i.first) != string::npos){
            // if(isupper(str[0]) && islower(i.first[0])){
            //     toupper(i.second[0]);
            // }

            int index = temp.find(i.first);
            temp.replace(index,i.first.length(),i.second); 
            // if(isupper(i.second[0])){
            //     tolower(i.second[0]);
            // }
        }
    }
    return temp;
   
}