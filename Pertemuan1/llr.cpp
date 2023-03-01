#include <iostream>
using namespace std;
int main ()
{
    string uname[100]={};
    string pass[100]={};
    int iu = 0;
    int ipw = 0;
    int choose;
    string vuname;
    string vpass;
    bool gagal = false;
    bool masuk = false;
    string tempname;
    while (true) {
        cout << "Pilih menu" << endl;
        cout << "1. Register" << endl;
        cout << "2. Login" << endl;
        cout << "3. Exit" << endl;
        cin >> choose;
        if (choose == 1) {
            cout << "Input uname" << endl;
            cin >> uname[iu];
            iu++;
            cout << "input password" << endl;
            cin >> pass[ipw];
            ipw++;
        }
        else if (choose == 2) {
            cout << "Input uname" << endl;
            cin >> vuname;
            cout << "input password" << endl;
            cin >> vpass;
            for (int i=0;i<100;i++) {
                if (vuname == uname[i] && vpass == pass[i]) {
                    cout << "login berhasil" << endl;
                    gagal = false;
                    masuk = true;
                    tempname=uname[i];
                    break;
                }
                else {
                    gagal = true;
                }
            }
            if (gagal) {
                cout << "info login salah" << endl;
            }
        }

        else if (choose == 3) {
            break;
        }

        else {
            cout << "Input tidak valid" << endl;
        }

        while (masuk==true) {
            cout << "Selamat Datang " << tempname << endl;
            cout << "Pilih menu" << endl;
            cout << "1. logout" << endl;
            cin >> choose;
            if (choose == 1) {
                masuk=false;
            }
            else {
            cout << "Input tidak valid" << endl;
            }
        }
    }
    return 0;
}