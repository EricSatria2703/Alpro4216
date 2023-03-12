#include <iostream>
using namespace std;

// 1.
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

// 2.
void menus() {
    cout << "Menu Makanan" << endl;
    cout << "1. Nasi Goreng - Rp.10000" << endl;
    cout << "2. Mie - Rp.5000" << endl;
    cout << "3. Es Teh - Rp.3000" << endl;
    cout << "4. Es Kopi - Rp.4000" << endl;
}

string displayharga(int z) {
    if (z==1) {
        return "Nasi Goreng - Rp.10000";
    }
    else if (z==2) {
        return "Mie - Rp.5000";
    }

    else if (z==3) {
        return "Es Teh - Rp.3000";
    }
    else if (z==4) {
        return "Es Kopi - Rp.4000";
    }
    else {
        return "Invalid - Rp.0";
    }
}

// 3. & 4.
int choose(int y) {
    if (y==1) {
        return 10000;
    }

    else if (y==2) {
        return 5000;
    }

    else if (y==3) {
        return 3000;
    }

    else if (y==4) {
        return 4000;
    }

    else {
        return 0;
    }
}

int pay(int x) {
    int y;
    int tagihan=0;
    int items=0;
    for(int i=0;i<x;i++) {
        cout << "Pilih menu: ";
        cin >> y;
        if (y>0 && y<5) {
            cout << displayharga(y) << endl;
            tagihan += choose(y);
            items++;
        }
        else {
            cout << displayharga(y) << endl;
        }
    }
    cout << "Anda memesan " << items << " item dengan total tagihan: " << endl;
    return tagihan;
}

// Eric Satria Pratama
// A11.2022.14601
// A11.4216

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