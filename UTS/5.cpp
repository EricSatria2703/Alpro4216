//NOMOR 5
#include <iostream>
using namespace std;

void linearSearch(string arr[], int size, string key) {
    bool found = false;
    int j;
    for(int i=0;i<size;i++) {
        if (arr[i]==key) {
        found = true;
        j = i;
        }
    }
    if (found) {
        cout << "Ditemukan pada indeks ke " << j << endl;
    }
    else {
        cout << "Tidak ditemukan!" << endl;
    } 
}
void printArray(string array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

int main()
{
    string cari;
    string ikan[4] = {"Salmon","Mujair","Lele","Tuna"};
    printArray(ikan, 4);
    cout << "\nWARNING!!! CASE SENSITIVE!!!" << endl;
    cout << "Inputkan yang ingin dicari: ";
    cin >> cari;
    linearSearch(ikan,4,cari);
    return 0;
}