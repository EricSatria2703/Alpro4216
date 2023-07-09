#include <iostream>
using namespace std;

int main()
{
    int* i =  new int[3];
    string* j = new string[3];

    for(int x=0;x<3;x++) {
        cout << "Inputkan NIP: ";
        cin >> i[x];
        cout << "Inputkan nama: ";
        cin >> j[x];
    }

    for(int y=0;y<3;y++) {
    cout << *(i+y) << endl;
    cout << *(j+y) << endl;
    }

    delete[] i;
    delete[] j;

    return 0;
}