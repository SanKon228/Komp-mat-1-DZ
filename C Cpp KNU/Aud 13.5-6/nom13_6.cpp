#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(){
    char fname[20] = "1.txt";
    ifstream f(fname);
    string kkk[] = {"one", "two", "three"};
    string buf;
    bool a = false;
    ofstream f2("tmp.txt");
    while(f>>buf){
        if(a){
            buf[0] = toupper(buf[0]);
        }
        clog<<buf<<" ";
        f2<<buf<<" ";
        a = false;
        for(int i=0;i<6;i++){
            if(buf==kkk[i]){
                a = true;
                break;
            }
        }
    }
    f.close();
    f2.close();
    rename("tmp.txt", fname);
}