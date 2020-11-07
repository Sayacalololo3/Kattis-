#include <bits/stdc++.h>

using namespace std;

int main(){

    int tests;
    cin >> tests;
    stringstream ss;
    int count = 1;
    while(tests--){

        int guests;
        cin >> guests;
        string group,answer;
        while(guests--){
            string temp;
            cin >> temp;
            group.append(temp+"$");
        }

        while(!group.empty()){
            int index = group.find_first_of("$");
            string target = group.substr(0,index+1);
            group.erase(0,index+1);
            if(group.find(target) != string::npos){
                 int index = group.find(target);
                group.erase(index,target.length()+1);
            }
            else{
                answer = target;
            }

        }
        answer.pop_back();
        ss << "Case #" << count++ << ": " << answer << endl;

        group.clear();   
    }
    cout << ss.str();
}