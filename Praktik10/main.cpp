#include <iostream>
using namespace std;

int main() {

    int nim[3];
    string nama[3];
    int* pnim = nim;
    string* pnama = nama;
    for(int i=0;i<3;i++) {
        cout << "Inputkan NIM: ";
        cin >> nim[i];
        cout << "inputkan Nama: ";
        cin >> nama[i];
    }
    for (int i=0;i<3;i++) {
        cout << *(pnim+i) << endl;
        cout << *(pnama+i) << endl;
    }
    
    return 0;
}