#include <iostream>

using namespace std;

int mltpl(int x, int y, int z) {
    return x*y*z;
}

void biodata(){
    cout << "\nHalo nama saya Eric" << endl;
    cout << "NIM saya A11.2022.14601" << endl;
}

string gg(int l) {
    int o = l%2;
    if (o=0) {
        return "genap";
    }
    else {
        return "ganjil";
    }

}

int main()
{

    cout << gg(6);

    /*
    string nama;
    int usia;
    string jurusan;
    cout << "Biodata" << endl;
    cout << "masukkan nama:" << endl;
    cin >> nama;
    cout << "masukkan usia:" << endl;
    cin >> usia;
    cout << "masukkan jurusan:" << endl;
    cin >> jurusan;
    cout << "Hallo nama saya " << nama << " umur saya " << usia << " saya kuliah di jurusan " << jurusan << endl;
    if (usia%2 != 0) {
        cout << "usia saya ganjil" << endl;
    }
    else {
        cout << "usia saya genap" << endl;
    }
    */

    /*cout << mltpl(1,2,3);
    biodata();*/
    return 0;
}
