#include <bits/stdc++.h>

using namespace std;

struct cordinates{
    int x;
    int y;
    int calculate();
};

int cordinates::calculate(){
    return x * y;
}

int main(){
  int tests;
  cin >> tests;
  int numFreckles;
  while(tests--){
      cin >>  numFreckles;
      cordinates Freckles[numFreckles];
      int count = 0;
      for(cordinates i:Freckles){
          cin >> i.x >> i.y;
          count += i.calculate();
      }
      cout << count << endl;
  }

}   