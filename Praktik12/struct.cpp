#include <iostream>
using namespace std;

typedef struct array
{
    int nim;
    char nama;
}data;

struct jumlah {
    int x,y;
};

struct staff {
    int nip;
    string nama;
};

typedef struct mhs {
    char nim[15];
    string nama;
    int umur;
}input;

typedef struct warga {
    char nik[15];
    string nama;
    int umur;
}inputwrg;

int main()
{
    // data array[2];
    // // Input
    // for(int i=0;i<2;i++) {
    //     cout << "Input nim: ";
    //     cin >> array[i].nim;
    //     cout << "Input nama: ";
    //     cin >> array[i].nama;    
    // }
    // // Output
    // for(int i=0;i<2;i++) {
    //     cout << array[i].nim << endl;
    //     cout << array[i].nama << endl;
    // }

    // struct jumlah bil1;
    // bil1.x=11;
    // bil1.y=23;

    // cout << bil1.x+bil1.y << endl;


    // NOMOR 1


    // struct staff staff1;
    // cin >> staff1.nip;
    // cin >> staff1.nama;
    // struct staff staff2;
    // cin >> staff2.nip;
    // cin >> staff2.nama;
    // struct staff staff3;
    // cin >> staff3.nip;
    // cin >> staff3.nama;
    // struct staff staff4;
    // cin >> staff4.nip;
    // cin >> staff4.nama;
    // struct staff staff5;
    // cin >> staff5.nip;
    // cin >> staff5.nama;
    // cout << staff1.nip << endl;
    // cout << staff1.nama << endl;


    // NOMOR 2


    // input mhs1;
    // cin >> mhs1.nim;
    // cin >> mhs1.nama;
    // cin >> mhs1.umur;
    // input mhs2;
    // cin >> mhs2.nim;
    // cin >> mhs2.nama;
    // cin >> mhs2.umur;
    // input mhs3;
    // cin >> mhs3.nim;
    // cin >> mhs3.nama;
    // cin >> mhs3.umur;
    // input mhs4;
    // cin >> mhs4.nim;
    // cin >> mhs4.nama;
    // cin >> mhs4.umur;
    // input mhs5;
    // cin >> mhs5.nim;
    // cin >> mhs5.nama;
    // cin >> mhs5.umur;
    // cout << mhs1.nim << endl;
    // cout << mhs1.nama << endl;
    // cout << mhs1.umur << endl;
    

    // NOMOR 3

    inputwrg list[5];
    for (int i=0;i<5;i++) {
        cout << "Inputkan NIK: ";
        cin >> list[i].nik;
        cout << "Inputkan nama: ";
        cin >> list[i].nama;
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