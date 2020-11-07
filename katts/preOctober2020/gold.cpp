#include<iostream>
#include<string>

using namespace std;

int main(){
    int lines, characters;
    cin >> characters >> lines;
    string row;
    string map;
    cin.ignore();
    while(lines--){
        getline(cin,row);
        map += row + '\n';
    }
    int player = map.find('P');
    int gold = 0;
    for(int i = player;i<map.length();i++){
        if(map[i] == 'T'){
            break;
        }
        else if(map[i] == 'G'){
            gold++;
        }
    }
    cout << gold;

}