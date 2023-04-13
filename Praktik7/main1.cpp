#include <iostream>
using namespace std;

void insertData(int arr[][2], int size) {
    for(int i=0;i<size;i++){
        for(int j=0;j<2;j++) {
            if (j<1) {
                cout << i+1 <<". Inputkan nim: ";
            }
            else {
                cout <<"Inputkan nilai: ";
            }
            cin >> arr[i][j];
        }
    }
}

void printData(int arr[][2], int size) {
    for(int i=0;i<size;i++) {
        for(int j=0;j<2;j++) {
            cout << arr[i][j] << " ";
        }
        cout <<"\n"; 
    }    
}

void bubblesortNim(int array[][2], int size) {
    int tempNim;
    int tempNilai;
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if (array[j][0]>array[j+1][0]) {
                tempNim=array[j][0];
                tempNilai=array[j][1];
                array[j][0]=array[j+1][0];
                array[j][1]=array[j+1][1];
                array[j+1][0]=tempNim;
                array[j+1][1]=tempNilai;
            }
        }
    }
}

void bubblesortNilai(int array[][2], int size) {
    int tempNim;
    int tempNilai;
    for(int i=0;i<size-1;i++) {
        for(int j=0;j<size-i-1;j++) {
            if (array[j][1]>array[j+1][1]) {
                tempNim=array[j][0];
                tempNilai=array[j][1];
                array[j][0]=array[j+1][0];
                array[j][1]=array[j+1][1];
                array[j+1][0]=tempNim;
                array[j+1][1]=tempNilai;
            }
        }
    }
}

void selectionsortNim(int array[][2], int size) {
    int tempNim;
    int tempNilai;
    for(int i=0;i<size-1;i++) {
        int min=i;
        for(int j=i+1;j<size;j++) {
            if(array[j][0]<array[min][0]){
                min=j;
            }
        }
        tempNim=array[i][0];
        tempNilai=array[i][1];
        array[i][0]=array[min][0];
        array[i][1]=array[min][1];
        array[min][0]=tempNim;
        array[min][1]=tempNilai;
    }        
}

void selectionsortNilai(int array[][2], int size) {
    int tempNim;
    int tempNilai;
    for(int i=0;i<size-1;i++) {
        int min=i;
        for(int j=i+1;j<size;j++) {
            if(array[j][1]<array[min][1]){
                min=j;
            }
        }
        tempNim=array[i][0];
        tempNilai=array[i][1];
        array[i][0]=array[min][0];
        array[i][1]=array[min][1];
        array[min][0]=tempNim;
        array[min][1]=tempNilai;
    }        
}

void linearSearch(int arr[][2], int size, int key) {
    bool found = false;
    int temp;
    for(int i=0;i<size;i++) {
        for(int j=0;j<2;j++) {
            if (arr[i][j]==key) {
            found = true;
            }
        }
    }
    if (found) {
        cout << "Ditemukan!" << endl;
    }
    else {
        cout << "Tidak ditemukan!" << endl;
    } 
}

int binarySearch (int arr[][2], int size, int searchKey) {
    int left = 0;
    int right = size-1;
    int middle = 0;
    int found;
    while (left<=right) {
        middle = (left+right)/2;
        if (arr[middle][0] == searchKey) {
            found=middle;
        }
        else if (searchKey < arr[middle][0]) {
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }
    left=0;
    right=size-1;
    middle=0;
    while (left<=right) {
        middle = (left+right)/2;
        if (arr[middle][1] == searchKey) {
            found=middle;
            return found;
        }
        else if (searchKey < arr[middle][1]) {
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }
    return -1;        
}

void menu() {
    cout << "1. Bubble Sort" << endl;
    cout << "2. Selection Sort" << endl;
    cout << "3. Linear Search" << endl;
    cout << "4. Binary Search" << endl;
    cout << "5. Show Data" << endl;
    cout << "6. Exit" << endl;
    cout << "Inputkan angka dari algoritma yang ingin diterapkan: ";
}

void pilihData() {
    cout << "1. Berdasar nim" << endl;
    cout << "2. Berdasar nilai" << endl;
    cout << "Pilih preferensi pengurutan: ";
}

int main()
{
    int size;
    int key;
    int choose;
    int hasil;
    bool exit=false;
    cout << "Inputkan banyak mahasiswa: ";
    cin >> size;
    int data[size][2];
    insertData(data, size);
    printData(data, size);
    while (!exit) {
        menu();
        cin >> choose;
        if (choose==1) {
            pilihData();
            cin >> choose;
            if (choose==1) {
                bubblesortNim(data, size);
            }
            else if (choose==2) {
                bubblesortNilai(data, size);
            }
            else {
                cout << "Input invalid!" << endl;
            }
        }
        else if (choose==2) {
            pilihData();
            cin >> choose;
            if (choose==1) {
                selectionsortNim(data, size);
            }
            else if (choose==2) {
                selectionsortNilai(data, size);
            }
            else {
                cout << "Input invalid!" << endl;
            }
        }
        else if (choose==3) {
            cout << "Inputkan yang ingin dicari: ";
            cin >> key;
            linearSearch(data, size, key);
        }
        else if (choose==4) {
            cout << "Inputkan yang ingin dicari: ";
            cin >> key;
            selectionsortNim(data,size);
            hasil=binarySearch(data, size, key);
            if (hasil==-1) {
                cout << "Tidak ditemukan!" << endl;
            }
            else {
                cout << "Ditemukan!" << endl;
            } 
        }
        else if (choose==5) {
            printData(data, size);
        }
        else if (choose==6) {
            exit=true;
        }
        else {
            cout << "input invalid!" << endl;
        }
    }
    
    return 0;
}