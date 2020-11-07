#include<iostream>
#include<math.h>

#define PI 3.14159265
int main(){
    int height, angle;
    std::cin >> height >> angle;
    int answer = ceil(height/sin(angle*PI/180));
    std::cout << answer;
}
