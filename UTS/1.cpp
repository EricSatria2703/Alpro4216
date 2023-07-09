//Eric Satria Pratama
//A11.20222.14601
//A11.4216

//NOMOR 1
#include <iostream>
using namespace std;

int Calculate(int e, int r) {
    int i = e * r;
    return i;
}

void ShowResults(int c) {
    cout << "Luas dari persegi panjang adalah: " << c << endl;
}

int main()
{
    int panjang;
    int lebar;
    int hasil;
    cout << "Inputkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Inputkan lebar persegi panjang: ";
    cin >> lebar;
    hasil = Calculate(panjang, lebar);
    ShowResults(hasil);

    return 0;
}