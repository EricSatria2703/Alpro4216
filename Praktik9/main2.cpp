#include <iostream>
using namespace std;

int fpb(int n1, int n2) {
    if (n2!=0) {
        return fpb(n2, n1 % n2);
    }
    else {
        return n1;
    }
}

int main() {
    int maxl;
    int camnt;
    cout << "Kalkulator Jumlah Band" << endl;
    cout << "Banyaknya jumlah maksimum anggota band adalah fpb dari jumlah penyanyi "; 
    cout << "dan banyaknya gitaris" << endl;
    cout << "Inputkan banyaknya penyanyi: ";
    cin >> maxl;
    cout << "Inputkan banyaknya gitaris: ";
    cin >> camnt;
    cout << "banyak band dengan memakai jumlah maksimum penyanyi dan gitaris yang tersedia adalah " << fpb(maxl,camnt) << " band";
}