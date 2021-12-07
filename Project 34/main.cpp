#include <iostream>
#include <ctime>
#include <time.h>
#include <cstdlib>

using namespace std;
int game = 1, dist, dist0;
int PrevX, PrevY;
int x111, y111;
const int rows = 10, col = 10;
int matr[rows][col];/*матрица игрок один*/
int matr2[rows][col];/*матрица игрок два*/
int matr3[rows][col];/*матрица игрок один куда стреля*/
int matr4[rows][col];/*матрица игрок два куда стреля*/
void gameOver1() {
    cout << "Game over 1 Player won" << endl;
    ::game = 0;
}
void gameOver2() {
    cout << "Game over 2 Player won" << endl;
    ::game = 0;
}
void clear() {/*очищение всех матриц*/
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
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr3[i][j] = 0;
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr4[i][j] = 0;
        }
    }
}
void show1() {/*показать поле 1 игрока*/
    cout << '\n';
    cout << "Player 1" << endl;
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
void show2() {/*показать поле попаданий 2 игрока*/
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr4[i][j] = matr[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr4[i][j] == 1) {
                matr4[i][j] = 0;
            }
        }
    }

    cout << '\n';
    cout << "Player 1 Hiden" << endl;
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
void showOp2() {/*показать поле попаданий 1 игрока*/
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            matr3[i][j] = matr2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr3[i][j] == 1) {
                matr3[i][j] = 0;
            }
        }
    }

    cout << '\n';
    cout << "Player 2 Hiden" << endl;
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
void showOp1() {/*показать поле 2 игрока*/

    cout << '\n';
    cout << "Player 2" << endl;
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
int move() {/*переместится но соседнюю клетку*/
    cout << '\n' << "U - 1" << '\n';
    cout << "D - 2" << endl;
    cout << "L - 3" << endl;
    cout << "R - 4" << endl;
    cout << "LU - 5" << endl;
    cout << "RU - 6" << endl;
    cout << "LD - 7" << endl;
    cout << "RD - 8" << endl;
    char m;
    cout << "Where- ";
    cin >> m;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr[i][j] == 1)
            {

                switch (m)
                {
                case '1':
                    if (matr[i - 1][j] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i - 1][j] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '2':
                    if (matr[i + 1][j] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i + 1][j] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '3':
                    if (matr[i][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '4':
                    if (matr[i][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i][j + 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '5':
                    if (matr[i - 1][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i - 1][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '6':
                    if (matr[i - 1][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i - 1][j + 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '7':
                    if (matr[i + 1][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i + 1][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '8':
                    if (matr[i + 1][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr[i + 1][j + 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                default:
                    cout << "error" << endl;
                    move();
                    break;
                }

                matr[i][j] = 0;

                return 0;

            }
        }
    }
}
int move2() {/*переместится но соседнюю клетку второму игроку*/
    cout << '\n' << "U - 1" << endl;
    cout << "D - 2" << endl;
    cout << "L - 3" << endl;
    cout << "R - 4" << endl;
    cout << "LU - 5" << endl;
    cout << "RU - 6" << endl;
    cout << "LD - 7" << endl;
    cout << "RD - 8" << endl;
    char m;
    cout << "Where- ";
    cin >> m;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++) {
            if (matr2[i][j] == 1)
            {

                switch (m)
                {
                case '1':
                    if (matr2[i - 1][j] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i - 1][j] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '2':
                    if (matr2[i + 1][j] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i + 1][j] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '3':
                    if (matr2[i][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '4':
                    if (matr2[i][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i][j + 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '5':
                    if (matr2[i - 1][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i - 1][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '6':
                    if (matr2[i - 1][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i - 1][j + 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '7':
                    if (matr2[i + 1][j - 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i + 1][j - 1] = 1;
                        cout << "U moved" << endl;
                    }
                    break;
                case '8':
                    if (matr2[i + 1][j + 1] == 2) {
                        cout << "Zaniato" << endl;
                        return move();
                    }
                    else {
                        matr2[i + 1][j + 1] = 1;
                        cout << "U moved" << endl;
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
void set() {/*выбрать место корабля*/
    int x, y;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    matr[x][y] = 1;
}
void setop() {/*выбрать место 2 корабля*/
    int x, y;
    cout << "x="; cin >> x;
    cout << "y="; cin >> y;
    matr2[x][y] = 1;
}
void setc() {/*выбрать место компютер*/
    int x = rand() % rows;
    int y = rand() % col;
    matr2[x][y] = 1;
}
void Attack() {/*выбрать место атаки*/
    int x, y, x1, y1;
    cout << "X = ";
    cin >> x;

    cout << "Y = ";
    cin >> y;

    if (matr2[x][y] == 1) {
        gameOver1();
    }
    else {
        matr2[x][y] = 2;
        cout << '\n';
        cout << "Continue the game" << endl;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++)
            if (matr2[i][j] == 1) {
                x1 = i;
                y1 = j;
            }
    }
    cout << '\n' << "Distance to 2 player - " << abs(x - x1) + abs(y - y1) << endl;/*Манхетонська дистанція*/
}
void AttackOp() {/*выбрать место атаки 2 игрок*/
    int x, y, x1, y1;
    cin >> x;
    cin >> y;
    if (matr[x][y] == 1) {
        gameOver2();
    }
    else {
        matr[x][y] = 2;
        cout << '\n';
        cout << "Continue the game" << endl;
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < col; j++)
            if (matr[i][j] == 1) {
                x1 = i;
                y1 = j;
            }
    }
    cout << '\n' << "Distance to 1 player - " << abs(x - x1) + abs(y - y1) << endl;
}

void AttackCom() {/*выбрать место атаки на угад*/
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
            x111 = i;
            y111 = j;
         }
    }
}

int AttackComH() {/*выбрать место атаки в радиусе прошлой дистанции*/

    int x, y;
    int dist2;
    int flag = 0;

    for(int i=0;i<rows;i++) 
    {
        for(int j = 0; j < col; j++) 
        {
            if(matr4[i][j] == 1) 
            {
                matr4[i][j] = 0;
            }
            else {
                matr4[i][j] = matr[i][j];
            }

        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (matr4[i][j] == 2)
            {
                flag = 1;
            }
        }
    }
            if (flag == 1)
            {
                while (1)
                {
                    x = rand() % rows;
                    y = rand() % col;

                    dist2 = abs(x - PrevX) + abs(y - PrevY);
                    if ( dist2 == dist0)
                    {
                        if (matr4[x][y] != 2)
                        {
                            if (matr[x][y] == 1)
                            {
                                gameOver2();
                            }
                            else
                            {
                                matr[x][y] = 2;
                                PrevX = x;
                                PrevY = y;
                            }
                            for (int i = 0; i < rows; i++)
                            {
                                for (int j = 0; j < col; j++)

                                    if (matr[i][j] == 1)
                                    {
                                        x111 = i;
                                        y111 = j;
                                    }
                            }

                            dist0 = abs(x - x111) + abs(y - y111);

                            cout << "DDD = " << dist0 << endl;

                            return 0;
                        }
                    }

                }
            }
            else
            {

                x = rand() % rows;
                y = rand() % col;

                if (matr[x][y] == 1)
                {
                    gameOver2();
                }
                else
                {
                    matr[x][y] = 2;
                    PrevX = x;
                    PrevY = y;
                }
                for (int i = 0; i < rows; i++)
                {
                    for (int j = 0; j < col; j++)

                        if (matr[i][j] == 1)
                        {
                            x111 = i;
                            y111 = j;
                        }
                }

                dist0 = abs(x - x111) + abs(y - y111);

                cout << "DDD = "<< dist0 << endl ;


                return 0;
            }
}


/*
if (matr[x][y] == 1) {
    gameOver2();
}
else {
    matr[x][y] = 2;
    cout << "Continue the game";
}

cout << '\n' << "Distance to 1 player- " << ;
}
*/
int Game() {/*Игра*/
    int ch, ch1,ch2;
    cout << "with whome do u wanna play?" <<endl;
    cout << "Computer - 1" << endl;
    cout << "2 players - 2" << endl;
    cout << "Exit - 3" << endl;
    cin >> ch;
    clear();
    switch (ch) {
    case 1:
    cout<<"Easy-1"<<'\n'<<"Hard-2----->";
    cin>>ch2;
        set();
        setc();
        while (game == 1) 
        {
            show1();
            showOp2();
            cout << "Attack-1" << endl;
            cout << "Move-2" << endl;
            cin >> ch1;
            switch (ch1)
            {
            case 1:
                Attack();
                break;
            case 2:
                move();
                break;
            default:
                cout << "error" << endl;
                break;
            }
            switch (ch2)
            {
            case 1:
                AttackCom();
                break;
            case 2:
            AttackComH();
            break;
            default:
                break;
            }
            
        }
        return 1;
        break;
    case 2:
        set();
        setop();
        while (game == 1) 
        {
            show1();
            showOp2();
            cout << "Attack-1" << endl;
            cout << "Move-2 ---->";
            cin >> ch1;
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
            if (game == 1) {
                showOp1();
                show2();
                cout << "Player 2 hod" << endl;
                cout << "Attack-1" << endl;
                cout << "Move-2 ---->";
                cin >> ch1;
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
            else {
                cout << '\n' << "Not hodit";
            }
        }
        return 1;
        break;
    case 3:
        return 0;
    default:
        Game();
        break;
    }
    return 0;
}
int main() {
    int A = 1;
    srand(static_cast<unsigned int>(time(0)));
    while (A == 1)
    {
        game = 1;
        A = Game();
    }
}
