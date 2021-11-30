#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <climits>

using namespace std;
int parseWords(string s, char del, int n, string words[]){
    stringstream sstream(s);
    string word;
    int k=0;
    while(std::getline(sstream,word,del) && k<n){
        words[k++] = word;
    }
    return k;
}
string words_a(string s, char del){
    stringstream sstream(s);
    string word;
    int k=0;
    int min_word_len = INT_MAX;
    string min_word="";
    while(std::getline(sstream,word,del)){
        if(word.size()<min_word_len){
            min_word = word;
            min_word_len = word.size();
        }
    }
    return min_word;
}
string words_b(string s, char del){
    stringstream sstream(s);
    string word;
    int k=0;
    int min_word_len = INT_MAX;
    string min_word="";
    while(std::getline(sstream,word,del)){
        if(word.size()<=min_word_len){
            min_word = word;
            min_word_len = word.size();
        }
    }
    return min_word;
}
int main(){
    string text = "lol Hello there huh";
    char del = ' ';
    
    cout<<"First -" << words_a(text,del)<<"\n";
    cout<<"Last -" << words_b(text,del)<<"\n";
}