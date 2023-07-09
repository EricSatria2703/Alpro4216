//NOMOR 4
#include <iostream>
using namespace std;

void selectionsort(string e[], int r) {
    string temp;
    for(int i=0;i<r-1;i++) {
        int min=i;
        for(int c=i+1;c<r;c++) {
            if(e[c]<e[min]){
                min=c;
            }
        }
        temp=e[i];
        e[i]=e[min];
        e[min]=temp;
    }        
}

void printArray(string array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

int main()
{
    string ikan[4] = {"Salmon","Mujair","Lele","Tuna"};
    cout << "Sebelum selection sort:" << endl;
    printArray(ikan, 4);
    cout << "\nSetelah selection sort: " << endl;
    selectionsort(ikan, 4);
    printArray(ikan, 4);
    return 0;
}