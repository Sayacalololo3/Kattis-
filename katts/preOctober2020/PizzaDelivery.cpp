#include<iostream>
using namespace std;

int main(){
    int tests;
    cin >> tests;
    while(tests--){
        int streets;
        int deliveries;
        cin >> streets >> deliveries;
        int arr[streets][deliveries];
        for(int i = 0; i < streets;i++){
            for(int j = 0; j < deliveries;j++){
                cin >> arr[i][j];
            }
        }
    }

}