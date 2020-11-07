#include <iostream>
#include <sstream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;



boost::multiprecision::cpp_int Factorial(int number) 
{ 
    boost::multiprecision::cpp_int num = 1; 
    for (int i = 1; i <= number; i++) 
        num = num * i; 
    return num; 
}
    

boost::multiprecision::cpp_int convert(int number){
    return Factorial(2*number)/(Factorial(number + 1) * Factorial(number));
}

int main() {
    
    int tests;
    stringstream answer;
    cin >> tests;
    while(tests--){
        int temp;
        cin >> temp;
        answer << convert(temp) << endl;

    }
    cout << answer.str();
}
 