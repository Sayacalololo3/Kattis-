#include <iostream>

using namespace std;
bool attacked(int attack,int rest,int target){
    int count = 0;

    while(1){
        count += attack;
        if(count >= target){
            return true;
        }
        count += rest;
        if(count >= target ){
            return false;
        }
    }
}

void print(int target,int a,int b, int c, int d){
    int dogs = 0;
    dogs += attacked(a,b,target);
    dogs += attacked(c,d,target);
    if(dogs == 2){
        cout << "both" << endl;
    }
    else if(dogs == 1){
        cout << "one" << endl;
    }
    else {
        cout << "none" << endl;
    }
}


int main(){
    int a,b,c,d,p,m,g;
    cin >> a >> b >> c >> d;
    cin >> p >> m >> g;
    print(p,a,b,c,d);
    print(m,a,b,c,d);
    print(g,a,b,c,d);




}