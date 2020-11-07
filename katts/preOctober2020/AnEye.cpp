#include<iostream>
using namespace std;

struct subs{
    string word;
    string symbol;
};

string translate(subs m[],string str){
    string temp = str;
    for(int i =0;i<40;i++){
        if(temp == m[i].word){
            temp = m[i].symbol;
            break;
        }
        if(temp.find(m[i].word) != string::npos){
            int index = temp.find(m[i].word);
            temp.replace(index,m[i].word.length(),m[i].symbol); 
            if(temp.length() == 2){
            break;
            }
        }
        
    }
    return temp;   
}


int main(){
    subs m[40];
    m[0].word = "at";
    m[0].symbol = "@";
    m[1].word = "At";
    m[1].symbol = "@";

    m[2].word = "and";
    m[2].symbol = "&";
    m[3].word = "And";
    m[3].symbol = "&";

    m[4].word = "one";
    m[4].symbol = "1";
    m[5].word = "One";
    m[5].symbol = "1";
    m[6].word = "won";
    m[6].symbol = "1";
    m[7].word = "Won";
    m[7].symbol = "1";

    
   
    m[8].word = "two";
    m[8].symbol = "2";
    m[9].word = "Two";
    m[9].symbol = "2";
    m[10].word = "too";
    m[10].symbol = "2";
    m[11].word = "Too";
    m[11].symbol = "2";
    m[12].word = "to";
    m[12].symbol = "2";
    m[13].word = "To";
     m[13].symbol = "2";

    m[14].word = "four";
    m[14].symbol = "4";
    m[15].word = "Four";
    m[15].symbol = "4";
    m[16].word = "for";
    m[16].symbol = "4";
    m[17].word = "For";
    m[17].symbol = "4";

    m[18].word = "bea";
    m[18].symbol = "b";
    m[19].word = "Bea";
    m[19].symbol = "B";
    m[20].word = "bee";
    m[20].symbol = "b";
    m[21].word = "Bee";
    m[21].symbol = "B";
    m[22].word = "be";
    m[22].symbol = "b";
    m[23].word = "Be";
    m[23].symbol = "B";

    m[24].word = "see";
    m[24].symbol = "c";
    m[25].word = "See"; 
    m[25].symbol = "C";
    m[26].word = "sea";
    m[26].symbol = "c";
    m[27].word = "Sea";
    m[27].symbol = "C";

    m[28].word = "eye";
    m[28].symbol = "i";
    m[29].word = "Eye";
    m[29].symbol = "I";
   
    m[30].word = "owe";
    m[30].symbol = "o";
    m[31].word = "Owe";
    m[31].symbol = "O";
    m[32].word = "oh";
    m[32].symbol = "o";
    m[33].word = "Oh";
    m[33].symbol = "O";

    m[34].word = "are";
    m[34].symbol = "r";
    m[35].word = "Are";
    m[35].symbol = "R";

    m[36].word = "you";
    m[36].symbol = "u";
    m[37].word = "You";
    m[37].symbol = "U";

    m[38].word = "why";
    m[38].symbol = "y";
    m[39].word = "Why";
    m[39].symbol = "Y";


    string word;
    string other;
    int test;
    cin >> test;
    cin.ignore();
    for(int i =0;i<test;i++){
        getline(cin,other);
        other += " ";
        while(!other.empty()){
            int index = other.find_first_of(" ");
            word += translate(m,other.substr(0,index)) + " ";  
            other.erase(0,index+1); 
        }
        word += "\n";         
    }
    cout << word;

}