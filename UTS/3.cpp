//NOMOR 3
#include <iostream>
using namespace std;

void bubblesort(string e[], int r) {
    string temp;
    for(int i=0;i<r-1;i++){
        for(int c=0;c<r-i-1;c++){
            if(e[c]>e[c+1]){
                temp=e[c];
                e[c]=e[c+1];
                e[c+1]=temp;
            }
        }
    }
}

void printArray(string array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}


int main()
{

string kebun [4] = {"sawit","jagung","teh","kopi"};
cout << "Sebelum bubble sort:" << endl;
printArray(kebun, 4);
bubblesort(kebun, 4);
cout << "\nSetelah bubble sort:" << endl;
printArray(kebun, 4);
return 0;
}