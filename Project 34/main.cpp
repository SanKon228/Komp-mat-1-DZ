#include <iostream>
#include <ctime>
#include 
using namespace std;
int game = 1, dist;
int x111,y111;
const int rows = col = 5;
int matr[rows][col];
int matr2[rows][col];
int matr3[rows][col];
int matr4[rows][col];
void gameOver1() {
    cout << "Game over 1 Player won";
    ::game = 0;
}
void gameOver2() {
    cout << "Game over 2 Player won";
    ::game = 0;
}
void clear() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr2[i][j] = 0;
        }
    }
}
void show1() {
    cout << '\n';
    cout << "Player 1";
    cout << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << " | " << matr[i][j] << " | ";
        }
        cout << '\n';
        for (int j = 0; j < rows; j++) {
            cout << " | - | ";
        }
        cout << '\n';
    }
    cout << '\n';
}
void show2() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr4[i][j]=matr[i][j];      
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
            if(matr4[i][j]==1){
               matr4[i][j]=0; 
            }
            }
        }

    cout << '\n';
    cout << "Player 1 Hiden";
    cout << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << " | " << matr4[i][j] << " | ";
        }
        cout << '\n';
        for (int j = 0; j < rows; j++) {
            cout << " | - | ";
        }
        cout << '\n';
    }
    cout << '\n';
}
void showOp2() {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr3[i][j]=matr2[i][j];      
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < col; j++) {
            if(matr3[i][j]==1){
               matr3[i][j]=0; 
            }
            }
        }

    cout << '\n';
    cout << "Player 2 Hiden"; cout << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << " | " << matr3[i][j] << " | ";
        }
        cout << '\n';
        for (int j = 0; j < rows; j++) {
            cout << " | - | ";
        }
        cout << '\n';
    }
}
void showOp1() {
    
    cout << '\n';
    cout << "Player 2"; cout << '\n';
    for (int j = 0; j < rows; j++) {
            cout << " | - | ";
        }
        cout << '\n';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            cout << " | " << matr2[i][j] << " | ";
        }
        cout << '\n';
        for (int j = 0; j < rows; j++) {
            cout << " | - | ";
        }
        cout << '\n';
    }
}
int move() {
    cout <<'\n'<< "U - 1" << '\n';
    cout << "D - 2" << '\n';
    cout << "L - 3" << '\n';
    cout << "R - 4" << '\n';
    cout << "LU - 5" << '\n';
    cout << "RU - 6" << '\n';
    cout << "LD - 7" << '\n';
    cout << "RD - 8" << '\n';
    char m;
    cout << "Where- ";
    cin >> m;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr[i][j] == 1) 
            {

                switch (m)
                {
                case '1' :
                    if(matr[i - 1][j] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{matr[i - 1][j] = 1;
                    cout << "U moved";
                    }
                    break;
                case '2':
                if(matr[i + 1][j] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i + 1][j] = 1;
                    cout << "U moved";
                    }
                    break;
                case '3':
                if(matr[i][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '4':
                if(matr[i][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '5':
                if(matr[i - 1][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i - 1][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '6':
                if(matr[i - 1][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i - 1][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '7':
                if(matr[i + 1][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i + 1][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '8':
                if(matr[i + 1][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr[i + 1][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                default:
                    cout << "error";
                    move();
                    break;
                }

                matr[i][j] = 0;

                return 0;

            }
        }
    }
}
int move2() {
    cout <<'\n'<< "U - 1" << '\n';
    cout << "D - 2" << '\n';
    cout << "L - 3" << '\n';
    cout << "R - 4" << '\n';
    cout << "LU - 5" << '\n';
    cout << "RU - 6" << '\n';
    cout << "LD - 7" << '\n';
    cout << "RD - 8" << '\n';
    char m;
    cout << "Where- ";
    cin >> m;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr2[i][j] == 1) 
            {

                switch (m)
                {
                case '1' :
                    if(matr2[i - 1][j] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{matr2[i - 1][j] = 1;
                    cout << "U moved";
                    }
                    break;
                case '2':
                if(matr2[i + 1][j] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i + 1][j] = 1;
                    cout << "U moved";
                    }
                    break;
                case '3':
                if(matr2[i][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '4':
                if(matr2[i][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '5':
                if(matr2[i - 1][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i - 1][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '6':
                if(matr2[i - 1][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i - 1][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '7':
                if(matr2[i + 1][j - 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i + 1][j - 1] = 1;
                    cout << "U moved";
                    }
                    break;
                case '8':
                if(matr2[i + 1][j + 1] == 2){
                    cout<<"Zaniato";
                    return move();                     
                    }
                    else{
                    matr2[i + 1][j + 1] = 1;
                    cout << "U moved";
                    }
                    break;
                default:
                    cout << "error";
                    move();
                    break;
                }

                matr2[i][j] = 0;

                return 0;

            }
        }
    }
}
void set() {
    int x, y;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    matr[x][y] = 1;
}
void setop() {
    int x, y;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    matr2[x][y] = 1;
}
void setc() {
    int x = rand() % rows;
    int y = rand() % col;
    matr2[x][y] = 1;
}
void Attack() {
    int x, y,x1,y1;
    cin >> x;
    cin >> y;
    if (matr2[x][y] == 1) {
        gameOver1();
    }
    else {
        matr2[x][y] = 2;
        cout<<'\n';
        cout << "Continue the game";
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
         if (matr2[i][j]==1){
            x1=i;
            y1=j;
         }
    }
    cout<<'\n'<<"Distance to 2 player- "<<abs(x-x1)+(y-y1);
}
void AttackOp() {
    int x, y,x1,y1;
    cin >> x;
    cin >> y;
    if (matr[x][y] == 1) {
        gameOver2();
    }
    else {
        matr[x][y] = 2;
        cout<<'\n';
        cout << "Continue the game";
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
         if (matr[i][j]==1){
            x1=i;
            y1=j;
         }
    }
    cout<<'\n'<<"Distance to 1 player- "<<abs(x-x1)+(y-y1);
}
void AttackCom() {
    int x = rand() % rows;
    int y = rand() % col;
    if (matr[x][y] == 1) {
        gameOver2();
    }
    else {
        matr[x][y] = 2;
    }
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++)
         if (matr[i][j]==1){
            x111=i;
            y111=j;
         }
    }
}
void AttackComH(){
    
    for(int i=1;i<rows;i++){
        for(int j;j<col;j++){
            if(matr4[i][j]==2){
                while(AttackCom();)
         }
    }

            }
            else{
                int x = rand() % rows;
                int y = rand() % col;
            }
            
    dist=abs(x-x1)+(y-y1);
        }
    }
    

    if (matr[x][y] == 1) {
        gameOver2();
    }
    else {
        matr[x][y] = 2;
        cout << "Continue the game";
    }
    
    cout<<'\n'<<"Distance to 1 player- "<<;
}
int Game() {
int ch,ch1;
    cout<<"with whome do u wanna play?";
    cout<<"Computer-1";
    cout<<"2 players - 2";
    cin >> ch;
    clear();
    switch(ch){
        case 1:
        set();
        setc();
        while(game == 1){
            show1();
            showOp2();
            cout<<"Attack-1";
            cout<<"Move-2";
            cin>>ch1;
            switch (ch1)
            {
            case 1:
                Attack();
                break;
            case 2:
                move();
                break;
            default:
            cout<<"error";
                break;
            }
            AttackCom();
       }
        break;
        case 2:
        set();
        setop();
        while(game == 1){
            show1();
                showOp2();
            cout<<"Attack-1"<<'\n';
            cout<<"Move-2 ---->";
            cin>>ch1;
            switch (ch1)
            {
            case 1:
                
                Attack();
                break;
            case 2:
                move();
                break;
            default:
                break;
            }
            if(game==1){
            showOp1();
            show2();
            cout<<"Player 2 hod"<<'\n';
            cout<<"Attack-1"<<'\n';
            cout<<"Move-2 ---->";
            cin>>ch1;
            switch (ch1)
            {
            case 1:
                AttackOp();
                break;
            case 2:
                move2();
                break;
            default:
                break;
            }
            }
            else{
                cout<<'\n'<<"Not hodit";
            }
        }
        break;
        default:
        Game();
        break;
    }
    return Game();
}
int main() {
    Game();
}
 