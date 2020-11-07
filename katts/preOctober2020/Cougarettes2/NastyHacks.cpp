#include <bits/stdc++.h>
using namespace std;

int main(){

    int cases;
    cin  >> cases;

    int not_adverstise_rev,adverstise_rev,cost;
    while(cases--){
        cin >> not_adverstise_rev >> adverstise_rev >> cost;
        if(not_adverstise_rev == (adverstise_rev - cost)){
            cout << "does not matter" << endl;
        }
        else{
            cout << (not_adverstise_rev > (adverstise_rev - cost) ? "do not advertise":"advertise") << endl;
        }
    }

}