#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string punctuation = " .,?!";
bool in(char s){
    for(char sym : punctuation){
        if(s==sym){return true;}
    }
    return false;
}

string inv(const string & s){
    string res = "";
    size_t n = s.size()-1;
    for(int i=1;i<=n;++i){
        res.push_back(s[n-i]);
    }
    return res;
}

int main(){
    string line;
    ifstream infile("example.txt");
    ofstream outfile("example_out.txt");
    string ans = "";
    string word = "";
    string text;
    char sym;
    if(infile.is_open()){
        while(getline(infile,text,'\n')){
            for(int i=0;i<text.size();++i){
                sym=text[i];
                if(in(sym)){
                    if(word!=""){
                        ans = inv(word);
                        outfile<<ans;
                    }
                    word = "";
                    outfile<<sym;
                }
                else{
                    cout<<sym;
                    word.push_back(sym);
                }
                cout<<sym;
            }
        }
        infile.close();
    }
    outfile.close();
    return 0;
}