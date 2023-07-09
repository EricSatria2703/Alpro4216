#include <iostream>
#include <string>
using namespace std;

typedef struct warga {
    char nik[15];
    char nama[10];
    int umur;
}inputwrg;

int main()
{
    inputwrg list[5];
    for (int i=0;i<5;i++) {
        cout << "Inputkan NIK: ";
        cin >> list[i].nik;
        cin.ignore(1000, '\n');
        cout << "Inputkan nama: ";
        cin.getline(list[i].nama, 10);
        cout << "Inputkan umur: ";
        cin >> list[i].umur;
    }
    for (int i=0;i<5;i++) {
        cout << list[i].nik << endl;
        cout << list[i].nama << endl;
        cout << list[i].umur << endl;
    }
    return 0;
}