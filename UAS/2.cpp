
// NOMOR 2

#include <iostream>
using namespace std;

typedef struct ikan {
    string nama;
    double berat;
} ListIkan;

void UbahBerat (ListIkan* list, int ukuran, string& cari) {
    for (int i=0; i < ukuran; i++) {
        if (list[i].nama == cari) {
            list[i].berat *= 2.0;
        }
    }
}

void TampilkanKoleksi(ListIkan* list, int ukuran) {
    for (int i=0;i<ukuran;i++) {
        cout << "- Nama: " << list[i].nama << ", Berat: " << list[i].berat << endl;
    }
}

int main()
{
    int ukuran;
    string cari;
    cout << "Ukuran koleksi ikan: ";
    cin >> ukuran;
    ListIkan *ptr,list[ukuran];
    for (int i=0;i<ukuran;i++) {
        cout << "Ikan ke-" <<  i+1 << endl;
        cout << "Nama: ";
        cin >> list[i].nama;
        cout << "Berat: ";
        cin >> list[i].berat;
    }

    cout << "Nama ikan yang ingin diubah beratnya: ";
    cin >> cari;

    UbahBerat(list, ukuran, cari);
    TampilkanKoleksi(list, ukuran);

    return 0;
}