#include <iostream>
using namespace std;

int main() {
    string nama;
    int golongan, anak;
    int gaji_pokok, pajak, tambahan, gaji_total;

    cout << "Masukkan nama anda : ";
    cin >> nama;

    cout << "Masukkan golongan (1,2,3) : ";
    cin >> golongan;

    cout << "Jumlah anak : ";
    cin >> anak;

    // menentukan gaji pokok
    if (golongan == 1)
        gaji_pokok = 5000000;
    else if (golongan == 2)
        gaji_pokok = 3000000;
    else if (golongan == 3)
        gaji_pokok = 2500000;

    // pajak 5%
    pajak = 0.05 * gaji_pokok;

    // tambahan anak
    if (anak == 1 || anak == 2)
        tambahan = anak * 500000;
    else if (anak > 2)
        tambahan = 750000;
    else
        tambahan = 0;

    // gaji total
    gaji_total = gaji_pokok - pajak + tambahan;

    cout << "Gaji total : Rp. " << gaji_total << endl;

    return 0;
}
