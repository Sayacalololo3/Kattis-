#include <iostream>
using namespace std;

int main(){
    int cards,a,b;
    cin >> cards >> a >> b;
    cout << (cards % (b + a) < a ? "Barb": "Alex");
}