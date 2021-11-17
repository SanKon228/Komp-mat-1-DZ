#include <iostream>
#include <cstdio>
using namespace std;

const int N = 25;

void nom_1(int a[N][N], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << a[i][j] << ends;
        cout << endl;
    }
    cout << endl;
}

void nom_4(int a[N][N], int n, int m) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
}

void nom_3(int a[N][N], int i, int j, int ii, int jj) {
    int x = a[i][j];
    a[i][j] = a[ii][jj];
    a[ii][jj] = x;
}

void nom_2(int a[N][N], int i, int j, int b) {
    a[i][j] = b;
}
void nom_5(int a[N][N], int n, int m) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < m; j++) {
            int x = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = x;
        }
    }
}

int nom_6(int a[N][N], int n, int m, int k) {
    int s = 0;
    if (k > 0) {
        for (int i = 0; i < n && i < m; i++)
            s += a[i + k][i];
    }
    else {
        for (int i = 0; i < n && i < m; i++)
            s += a[i][i - k];
    }
    return s;
}

int main() {
    int n, m;
    n = 3;
    m = 4;
    int b[N][N] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };
    nom_1(b, n, m);
    cout << nom_6(b, n, m, -1);
    return 0;
}
