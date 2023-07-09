// ERIC SATRIA PRATAMA || A11.2022.14601 || A11.4216
// NOMOR 1

#include <iostream>
using namespace std;

float days (float hari, float JumlahAwal, int InputHari) {
    if (hari == 1 && InputHari == 10) {
        return JumlahAwal + 2;
    }
    else if (hari == 1 && InputHari == 9) {
        return JumlahAwal + 1;
    }
    else if (hari == 1 && InputHari < 9) {
        return JumlahAwal;
    }
    else if (hari <= 7) {
        return days(hari-1, JumlahAwal * 2, InputHari);
    }
    else if (hari == 8) {
        return days(hari-1, JumlahAwal * 1.5, InputHari);
    }
    else if (hari == 9 || hari == 10) {
        return days(hari-1, JumlahAwal, InputHari);
    }
    else {
        return 0;
    }

}

int main()
{
    int hari;
    cout << "Hari: ";
    cin >> hari;
    cout << "Jumlah total ikan yang dapat ditangkap Andi pada hari ke-" << hari << " adalah " <<days(hari, 3, hari);
    return 0;
}