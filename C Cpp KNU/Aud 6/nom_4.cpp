#include <iostream>
#include <cstdio>
#include <bitset>
using namespace std;


int main() {
    uint32_t n = 0b11101101000110000001100001010101;
    cout << n <<"/n";
    cout << bitset<32>(n) << "/n";
    uint32_t first8, last8;
    last8 = n >> 24;
    first8 = n << 24;
    n = (n >> 8) << 8;
    n = (n << 8) >> 8;
    cout << bitset<32>(n) << "/n";
    n = n | last8 | first8;
    cout << bitset<32>(n) << "/n";
    cout << n << "/n";
    return 0;
}
