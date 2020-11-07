#include <bits/stdc++.h>
using namespace std;


int main(){

    int a,b,c;
    cin >> a >> b >> c;
    int arrival[3];
    int departure[3];
    for(int i = 0;i < 3;i++){
        cin >> arrival[i] >> departure[i];
    }
    int startTime = arrival[0];
    int endTime = departure[2];
    for(int i = 0;i < 3;i++){
        if(arrival[i] < startTime){
            startTime = arrival[i];
        }
        if(departure[i] > endTime){
            endTime = departure[i];
        }
    }
    int total = 0;    

    for(double i = startTime +.1; i < endTime;i++){
        
        int trucks = 0;
        if(arrival[0] <= i && i  <=  departure[0]){
            trucks++;
        }
        if(arrival[1] <= i && i <= departure[1]){
            trucks++;
        }
        if(arrival[2] <= i && i <= departure[2]){
            trucks++;
        }
        int cost;
        if(trucks == 1){
            cost = a;
        }
        else if(trucks == 2){
            cost = b;
        }
        else if(trucks == 3){
            cost = c;
        }
        else{
            cost = 0;
        }
        total += cost*trucks;
    }
    cout << total;


}