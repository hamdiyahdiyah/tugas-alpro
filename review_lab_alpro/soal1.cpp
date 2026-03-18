#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a;
    cin >> b;

    if (b == 0) {
        cout << "Tidak bisa dibagi dengan nol";
        return 0;
    }

    float hasil = (float)a / b;

    if (a % b == 0 && hasil > 2){
        cout << "VALID";
    }
    else{
        cout << "TIDAK";
    }

    return 0;
}