#include <iostream>
#include <ctime>
using namespace std;
int game =1;
const int rows=5;
const int col=5;
int matr[rows][col];
int matr2[rows][col];

int gameOver(){
    cout<<"Game over";
    ::game=0;
}
void clear(){
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            matr[i][j]=0;
        }
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            matr2[i][j]=0;
        }
    }
}
void show(){
    cout<<'\n';
    cout<<"Player 1";
    cout<<'\n';
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<" | "<<matr[i][j]<<" | ";
        }
        cout<<'\n';
    for(int j=0;j<rows;j++){
            cout<<" | - | ";
        }
        cout<<'\n';
    }
    cout<<'\n';
}
void showOp(){
    cout<<'\n';
    cout<<"Player 2";cout<<'\n';
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            cout<<" | "<<matr2[i][j]<<" | ";
        }
        cout<<'\n';
    for(int j=0;j<rows;j++){
            cout<<" | - | ";
        }
        cout<<'\n';
    }
}
void move(){
    cout<<"U - 1"<<'\n';
    cout<<"D - 2"<<'\n';
    cout<<"L - 3"<<'\n';
    cout<<"R - 4"<<'\n';
    cout<<"LU - 5"<<'\n';
    cout<<"RU - 6"<<'\n';
    cout<<"LD - 7"<<'\n';
    cout<<"RD - 8"<<'\n';
    int m;
    cout<<"Where- ";
    cin>>m;
    for (int i=0;i<rows;i++){
        for (int j=0;j<col;j++){
        if(matr[i][j]==1){
            matr[i][j]=0;  
            if(m==1 && matr[i-1][j]!=2){
                matr[i-1][j] =1;
                cout<<"U moved";
            }
            else if(m==2 && matr[i+1][j]!=2){
                matr[i+1][j] =1;
                cout<<"U moved";
            }
            else if(m==3 && matr[i][j-1]!=2){
                matr[i][j-1] =1;
                cout<<"U moved";
            }
            else if(m==4 && matr[i][j+1]!=2){
                matr[i][j+1] =1;
                cout<<"U moved";
            }
            else if(m==5 && matr[i-1][j-1]!=2){
                matr[i-1][j-1] =1;
                cout<<"U moved";
            }
            else if(m==6 && matr[i-1][j+1]!=2){
                matr[i-1][j+1] =1;
                cout<<"U moved";
            }
            else if(m==7 && matr[i+1][j-1]!=2){
                matr[i+1][j-1] =1;
                cout<<"U moved";
            }
            else if(m==8 && matr[i+1][j]!=2){
                matr[i+1][j+1] =1;
                cout<<"U moved";
            }
 
        }
    }
    }
}
void set(){
    int x,y;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    matr[x][y]=1;
}
void setop(){
    int x,y;
    cout<<"x=";cin>>x;
    cout<<"y=";cin>>y;
    matr2[x][y]=1;
}
void setc(){
    int x=rand()%rows;
    int y=rand()%col;
    matr2[x][y]=1;
}
void Attack(){
    int x,y;
    cin>>x;
    cin>>y;
    if(matr2[x][y] == 1){
        gameOver();
    }
    else{
        matr2[x][y] = 2;
        cout<<"Continue the game";
    }
}
void AttackOp(){
    int x,y;
    cin>>x;
    cin>>y;
    if(matr[x][y] == 1){
        gameOver();
    }
    else{
        matr[x][y] = 2;
        cout<<"Continue the game";
    }
}
void AttackCom(){
    int x=rand()%rows;
    int y=rand()%col;
    if(matr[x][y] == 1){
        gameOver();
    }
    else{
        matr[x][y] = 2;
        cout<<"Continue the game";
    }

}
/*
int main(){
    int ch,ch1;
    cout<<"with whome do u wanna play?";
    cout<<"Computer-1";
    cout<<"2 players - 2";
    cin >> ch;
    clear();
    set();
    
{    
    if(ch==1){
        while(game = 1){
        setc();
        int x,y;
        cin>>x;
        cin>>y;
        Attack();
        show();
    }
    }
    else if (ch==2)
    {
        while(game = 1){
            setop();
            cout<<"Attack-1";
            cout<<"Move-2";
            cin>>ch1;
            if (ch==1){
                Attack();
            }
            else if(ch==2){
            }
        }
        show();
    }    

return 0;
}
}*/