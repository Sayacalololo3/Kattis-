#include <iostream>
#include <sstream>
using namespace std;


int main(){
stringstream ss;
while(true){
    int test;
    int total = 0;
    int hours = 0;
    cin >> test;
    if(test == -1){
        break;
    }
        while(test--){
            int speed;
            int time;
            cin >> speed >> time;
            total += speed * ((hours > time) ? hours - time: time - hours);
            hours += ((hours > time) ? hours - time: time - hours);
        }
    ss << total << " miles"<< endl;

    }
    cout << ss.str();

}