#include <iostream>
#include <string>

using namespace std;


int main(){
  string previous;
  int size;
  cin >> previous >> size;
  string animals[size];
  char target = previous[previous.length()-1];
  bool win = false;
  bool found = false;
  int index,winIndex;

  for(int i = 0;i < size;i++){
      cin >> animals[i];
      
      if((animals[i])[0] == target && (animals[i])[animals[i].length() - 1] == target && !win) {

          if(animals[i] == previous){
              continue;
          }
          win = true;
          winIndex = i;
      }
      if((animals[i])[0] == target && !found){
          found = true;
          index = i;
      }
    }

    if(win){
        cout << animals[winIndex] << "!";
    }
    if(found){
        cout << animals[index];
    }
    else{
        cout << "?";
    }

}