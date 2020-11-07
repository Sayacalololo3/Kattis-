#include <bits/stdc++.h>

using namespace std;


string Acceptable(string s,string p){
        if(s == p){
            return "Yes";
        }
        for(int i = 0;i<=9;i++){
            if(s == (p + to_string(i)) || s == (to_string(i) + p)){
                return "Yes";
            }
        }


        stringstream temp;
        for(int i = 0;i < p.length();i++){
            char l;
            if(isupper(p[i])){
                temp << char(tolower(p[i]));
            }
            else if(islower(p[i])){
                temp << char(toupper(p[i]));
            }
            else{
                temp << p[i];
            }
        }
        if(s == temp.str()){
            return "Yes";
        }

        return "No";
}

int main(){
    string security,password;
    cin >> security >> password;

    cout << Acceptable(security,password);

}