#include <iostream>
#include <string>

using namespace std;



int main(){
    int tests;
    cin >> tests;
    string places;
    while(tests--){
        int input;
        cin >> input;
         int count = 0;
        while(input--){
            string line;
            cin >> line;
            if(places.find(line) == string::npos){
                places.append(line);
                count++;
            }
        }
        cout << count << endl;
    }
    
}