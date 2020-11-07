#include <bits/stdc++.h>

using namespace std;


int main() {
    double number,ammount;
    cin >> number  >> ammount;
    double total = number*(number+1)/2;
    vector<double> houses;

    houses.push_back(0);

    for(int i = 0;i < ammount;i++){
        int t;
        cin >> t;
        houses.push_back(t);
    }

    houses.push_back(number+1);

    for(int i =1 ; i < houses.size();i++){
        double difference = houses[i] - houses[i-1] - 1;
        total -= difference * (difference + 1)/2;
    }

    cout << (int)total;
    
}