#include<iostream>
#include<string>

using namespace std;

bool isVowel(char c){
    switch(c){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        break;
        default:
        return false;
        break;
    }         
}

int main(){

    string line;
    string other,word,first,result = "";
    int index,i;
    bool hasNew;

    while(getline(cin,other) && !other.empty()){

        line = other.substr(0,other.length()) + " ";

        while(line.length() > 0){
            index =  line.find_first_of(" ");
            word = line.substr(0,index);

            if(isVowel(word[0])){
                result += word + "yay ";
            }
            else{
                for(i = 0;i< index;i++ ){
                    if(isVowel(word[i])){
                        break;
                    }
                }
                result += word.substr(i,index - 1) + word.substr(0,i) + "ay ";
            }
            line.erase(0,index+1);
        }
        result += '\n';

    }   
    cout << result;

}