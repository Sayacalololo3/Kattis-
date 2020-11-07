#include <bits/stdc++.h>

using namespace std;

int BitToInt(string binary){
    int index = binary.find_first_not_of('0');
    string temp = binary.substr(index,binary.length());
    int sum = 0;
    for(int i = 0 ; i< temp.length();i++){
        if(temp[i] == '1'){
            sum += pow(2,i);
        }
    }
    return sum;
}

int main() {
    int a,b,c;
    cin >> a;
    stringstream s;
    s << std::bitset<32>(a);
    cout << BitToInt(s.str());
}