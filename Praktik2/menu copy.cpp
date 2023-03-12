#include <iostream>
using namespace std;

void break1(int x) {
    for(int i=0;i<x;i++) {
        cout << "====================" << endl;
    }
}

void break2(int x) {
    for(int i=0;i<x;i++) {
        cout << "x=x=x=x=x=x=x=x=x=x=x" << endl;
    }
}

void menus() {
    cout << "Menu Makanan" << endl;
    cout << "1. Nasi Goreng" << endl;
    cout << "2. Mie" << endl;
    cout << "3. Es Teh" << endl;
    cout << "4. Es Kopi" << endl;
}

string displayharga(int z) {
    if (z==1) {
        return "Nasi Goreng Rp.10000";
    }
    else if (z==2) {
        return "Mie Rp.5000";
    }

    else if (z==3) {
        return "Es Teh Rp.3000";
    }
    else if (z==4) {
        return "Es Kopi Rp.4000";
    }
    else {
        return "Invalid Rp.0";
    }
}

int pay(int y) {
    int pays;
    int harga;
    int items=0;
    int x;
    for(int i=0; i<y;i++) {
        cout << "Pesanan ke " << i+1 << endl;
        cout << "Pilih menu (1-4): ";
        cin >> x;
        if (x==1) {
            cout << displayharga(x) << endl;
            harga=10000;
            items++;
        }
        else if (x==2) {
            cout << displayharga(x) << endl;
            harga=5000;
            items++;
        }

        else if (x==3) {
            cout << displayharga(x) << endl;
            harga=3000;
            items++;
        }
        else if (x==4) {
            cout << displayharga(x) << endl;
            harga=4000;
            items++;
        }
        else {
            cout << displayharga(x) << endl;
            harga=0;
        }
        pays += harga;
    }
    pays=pays-y; // Memanggil function "displayharga" menambah nilai "pays" sebanyak jumlah panggilan "displayharga"  
    cout << "Anda memesan " << items << " pesanan dengan total tagihan:" << endl;
    return pays;
}

int main()
{
    int jmlh;
    break2(2);
    break1(1);
    menus();
    break1(1);
    cout << "Mau berapa kali pesan? ";
    cin >> jmlh;
    cout << pay(jmlh) << endl;
    break2(2);   
}