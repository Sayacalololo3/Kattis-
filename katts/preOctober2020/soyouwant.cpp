#include <iostream>
#include "math.h"
using namespace std;

int main(){
    float games, expected;
    cin >> games >> expected;
float count = 1;
   while(games != 0 && expected !=0){
        count += pow(count,expected);
        cout << count;
        cin >> games >> expected;
   }
}