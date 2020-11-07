#include <iostream>
using namespace std;

int main(){
    int printers;
    cin >> printers;
    int num = 1;
    int count = 1;
    while(num < printers){
        num*=2;
        count++;
    }
    cout << count;
}