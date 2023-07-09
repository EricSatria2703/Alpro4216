//NOMOR 6
#include <iostream>
using namespace std;

void selectionsort(string array[], int size) {
    string temp;
    for(int i=0;i<size-1;i++) {
        int min=i;
        for(int j=i+1;j<size;j++) {
            if(array[j]<array[min]){
                min=j;
            }
        }
        temp=array[i];
        array[i]=array[min];
        array[min]=temp;
    }        
}

int binarySearch (string arr[], int size, string searchKey) {
    selectionsort(arr,size);
    int left = 0;
    int right = size-1;
    int middle = 0;
    while (left<=right) {
        middle = (left+right)/2;
        if (arr[middle] == searchKey) {
            return middle;
        }
        else if (searchKey < arr[middle]) {
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }
    return -1;        
}

void printArray(string array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

void ShowFound(int f) {
    if (f>=0) {
        cout << "Ditemukan pada indeks ke " << f << endl;
    }
    else {
        cout << "Tidak ditemukan!" << endl;
    }
}

int main() 
{
    string cari;
    int hasil;
    string pertanian[4] = {"Timun", "Kunyit", "Cabai", "Bayam"};
    printArray(pertanian,4);
    cout << "\nWARNING!!! CASE SENSITIVE!!!" << endl;
    cout << "Inputkan yang ingin dicari: ";
    cin >> cari;
    hasil = binarySearch(pertanian,4,cari);
    ShowFound(hasil);
    printArray(pertanian,4);
    return 0;
}