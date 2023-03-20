#include <iostream>
using namespace std;

string oddeven(int i) {
    if (i%2!=0) {
        return "Ganjil";
    }
    else {
        return "Genap";
    }
}

float nilaiTugas(int i) {
    return i*(40.0/100);
}
float nilaiUTS(int i) {
    return i*(30.0/100);
}
float nilaiUAS(int i) {
    return i*(30.0/100);
}
float nilaiAkhir() {
    float tgs;
    float uts;
    float uas;
    cout << "Input nilai tugas: ";
    cin >> tgs;
    tgs = nilaiTugas(tgs);
    cout << "Input nilai UTS: ";
    cin >> uts;
    uts = nilaiUTS(uts);
    cout << "Input nilai UAS: ";
    cin >> uas;
    uas = nilaiUAS(uas);
    return tgs+uts+uas;
}
char huruf(int i) {
    if (i>=85) {
        return 'A';
    }
    else if (i>=75) {
        return 'B';
    }
    else if (i>=60) {
        return 'C';
    }
    else if (i>=50) {
        return 'D';
    }
    else {
        return 'E';
    }
}

int main() {
    float cariHuruf;
    cariHuruf = nilaiAkhir();
    cout << "Nilai Akhir: " << cariHuruf << " (" << oddeven(cariHuruf) << ")" << "\nHuruf: ";
    cout << huruf(cariHuruf);

}