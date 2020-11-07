#include <bits/stdc++.h>

using namespace std;




int main() {
    int test = 1;
    int count = 1;
    stringstream ss;
    while(test){

        cin >> test;
        string name;
        vector<string> order;
        for(int i = 0; i < test;i++){
            cin >> name;
            order.push_back(name);
        }
        if(test > 0){
            ss << "SET " << count++ << endl;
        }
        for(int i = 0 ;i < order.size();i+=2){
            ss << order[i] << endl;
        }
        reverse(order.begin(),order.end());
        bool odd = order.size() % 2 != 0;
        for(int i = odd;i < order.size() - odd;i+=2){
            ss << order[i] << endl;
        }
    }
    cout << ss.str();
}
