#include<bits/stdc++.h>

using namespace std;


int main(){
    string a,b,c,d,e;
    string order = "A23456789TJQK";
    map<char,int> suit;
    suit['C'] = 100;
    suit['D'] = 200;
    suit['H'] = 300;
    suit['S'] = 400;

    cin >> a >> b >> c >> d >> e;
    vector<int> answer;
    answer.push_back(order.find(a[0]) + suit[a[1]]);
    answer.push_back(order.find(b[0]) + suit[b[1]]);
    answer.push_back(order.find(c[0]) + suit[c[1]]);
    answer.push_back(order.find(d[0]) + suit[d[1]]);
    answer.push_back(order.find(e[0]) + suit[e[1]]);
    int max =  answer[0];
    int index = 0;
    // for(int i = 0; i < answer.size();i++){
    //     if(answer[i] > max){
    //         max = answer[0];
    //         index = i;
    //     }
    // }
    //cout << index + 1;
    for(auto i : answer)
    {
        cout << i << " ";
    }


}