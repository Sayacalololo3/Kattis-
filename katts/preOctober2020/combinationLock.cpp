#include <bits/stdc++.h>
using namespace std;

// difference from 40
int turn(int start,int end){
        start += 40 - end;
        return start%40;
}
int main() {
    int a,b,c,d;
    // right left right
    stringstream ss;
    while(cin >> a >> b >> c >> d){
        if(a + b+ c + d == 0){
            break;
        }
        int sum = 120;
        sum += turn(a,b); // right
        sum += turn(c,b); // left
        sum += turn(c,d); // right
        ss << sum*9 << endl;
    }
    cout << ss.str();
}