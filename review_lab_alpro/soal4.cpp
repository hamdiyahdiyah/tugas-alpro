#include <iostream>
using namespace std;

int main() {
    int x = 7;
    int y;

    y = x++;  // y = 7, lalu x jadi 8

    cout << "Nilai y: " << y << endl;
    cout << "Nilai x: " << x << endl;

    return 0;
}