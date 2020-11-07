#include <bits/stdc++.h>

using namespace std;

int main() {
    int bridges,knights,parties;
    cin >> bridges >> knights >> parties;
    bridges--;
    int groups = knights/parties;
    int days = bridges/groups; 
    cout << (bridges % groups != 0 ? days +1 : days);

}
