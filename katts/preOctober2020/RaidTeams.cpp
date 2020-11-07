#include <bits/stdc++.h>

using namespace std;

struct Player{
    int s1;
    int s2;
    int s3;
    string name;
    Player(string n,int a1,int a2,int a3){
        s1 = a1;
        s2 = a2;
        s3 = a3;
        name = n;
    }
};


int MaxSkill(vector<Player> arr,int skill){
    int max = 0;

    for(int i = 0;i < arr.size();i++){
        if((skill == 1 && arr[i].s1 > arr[max].s1) || (arr[i].s1 ==  arr[max].s1 && arr[i].name < arr[max].name)){
            max = i;
        }
        if((skill == 2 && arr[i].s2 > arr[max].s2) || (arr[i].s2 ==  arr[max].s2 && arr[i].name < arr[max].name)){
            max = i;
        }
        if((skill == 3 && arr[i].s3 > arr[max].s3) || (arr[i].s3 ==  arr[max].s3 && arr[i].name < arr[max].name)){
            max = i;
        } 
    }
    return max;
}




string RemoveAndGetName(vector<Player> &arr,int skill){
        int max = MaxSkill(arr,skill);
        string name;
        name = arr[max].name;
        arr.erase(arr.begin() + max);
        return name;
}


int main() {
    int ammount;
    cin >> ammount;
    string name;
    int s1,s2,s3;
    vector<Player> members;
    while(ammount--){
        cin >> name >> s1 >> s2 >> s3;
        Player input(name,s1,s2,s3);
        members.push_back(input);
    }
    string party[3];
    int size = 0;
    while(!members.empty()){
        switch(size){
            case 0:
                party[0] = RemoveAndGetName(members,1);
                break;
            case 1:
                party[1] = RemoveAndGetName(members,2);
                break;
            case 2:
                party[2] = RemoveAndGetName(members,3);
                break;   
        }
        size++;
        if(size == 3){
            cout << party[0] << " " << party[1] << " " << party[2] << endl;
            size = 0;
        }  
    }
}
