#include <bits/stdc++.h>
using namespace std;

int main(){

    map<string,string> alternate;
    alternate["A#"] = " Bb ";
    alternate["C#"] = " Db ";
    alternate["D#"] = " Eb ";
    alternate["F#"] = " Gb ";
    alternate["G#"] = " Ab ";

    alternate["Ab"] = " G# ";
    alternate["Eb"] = " D# ";
    alternate["Db"] = " C# ";
    alternate["Gb"] = " F# ";
    alternate["Bb"] = " A# ";
    

    string line;
    int cases = 1;
    stringstream ss;
    while(getline(cin,line) && !line.empty()){
        ss << "Case " << cases++ << ":";
        string key = line.substr(0,line.find_first_of(" "));
       if(line.find("#") != string::npos || line.find("b") != string::npos){
           ss << alternate[key] << (line.find("minor") != string::npos ? "minor":"major") << endl;
       }
       else {
           ss << " UNIQUE" << endl;
       }
    }
    cout << ss.str();
}