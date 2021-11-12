#include <iostream>
using namespace std;

int nom5_1()
{
    double n, s, a;
    cin >> a;
    n = 1; s = 0;
    while (s < a)
    {
        s += 1 / n++;
    }
    printf("%f \n", s);
    return 0;
}
int nom5_2() {
    int n, k, f, f1, f2;
    cin >> n;
    f1 = 1; f2 = 1;
    for (k = 2; k <= n; k++) {
        f = f1 + f2;
        f2 = f1;
        f1 = f;
    }
    cout << f1 << '\n';
    return 0;
}
float nom5_4(int n) {
    float p = 1, pk, b = 1, bk, i = 1;
    for (i = 1; i <= n; i++) {
        bk = b * (1 / i);
        b = bk;
        pk = p * (1 + b);
        p = pk;
    }
    return p;
}
int nom5_5()
{
    int x1 = -99, x2 = -99, x3 = -99, x;
    int k;
    cout << "k=";
    cin >> k;
    while (x3 < 0) {
        x = x1 + x3 + 100;
        k++;
        x1 = x2;
        x2 = x3;
        x3 = x;
    }
    printf("The smallest positive member of the sequence is x(%d)=%d", k, x3);
    return 0;
}
int nom5_6()
{
    int n;
    float b;
    cin >> n >> b;
    for (int i = 0; i < n; i++) {
        b += 1 / b;
    }
    cout << b;

    return 0;
}
float nom5_7(int n) {
    float a1 = 0, a2 = 1, ak, b1 = 1, b2 = 0, bk, s = 6;
    for (int k = 3; k <= n; k++) {
        bk = b2 + a2;
        ak = a2 / k + a1 * bk;
        s = s + pow(2, k) / (ak + bk);
        a1 = a2;
        a2 = ak;
        b1 = b2;
        b2 = bk;
    }

    return s;
}
