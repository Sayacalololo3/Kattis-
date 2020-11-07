#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string number,oringinal;
    cin >> oringinal;
    number = oringinal;
    next_permutation(number.begin(),number.end());
    cout << (oringinal >= number ? "0":number);  
}