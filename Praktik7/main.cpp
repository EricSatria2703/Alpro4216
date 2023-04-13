#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void insertArray(int array[], int size){
    for(int i=0;i<size;i++){
        cout << i+1 <<". Inputkan nilai: ";
        cin >> array[i];
    }
}

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

void shuffle(int a[], int n) {
    for (int i = 0; i < n; i++)
        swap(a[i], a[rand() % n]);
}

void bubblesort(int array[], int size) {
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]>array[j+1]){
                temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }
}

void selectionsort(int array[], int size) {
    int temp;
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

bool isSorted(int a[], int n)
{
    while (--n > 0)
        if (a[n] < a[n - 1])
            return false;
    return true;
}

void bogoSort (int arr[], int size) {
    while (!isSorted(arr,size)) {
        shuffle(arr, size);
    }
}

void linearSearch(int arr[], int size, int key) {
    bool found = false;
    int temp;
    for(int i=0;i<size;i++) {
        if (arr[i]==key) {
            found = true;
            temp = i;
        }
    }
    if (found) {
        cout << "Ditemukan pada indeks ke " << temp << endl;
    }
    else {
        cout << "Tidak ditemukan!" << endl;
    } 
}

int binarySearch (int arr[], int size, int searchKey) {
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

int main()
{
    bool exit = false;
    int choose;
    int size;
    int key;
    cout << "Inputkan ukuran array: ";
    cin >> size;
    int arr[size];
    insertArray(arr,size);
    printArray(arr, size);
    while (!exit) {
        cout << "\n1. shuffle array";
        cout << "\n2. sorting";
        cout << "\n3. searching";
        cout << "\n4. exit";
        cout << "\n input angka: ";
        cin >> choose;
        if (choose==1) {
            shuffle(arr, size);
            printArray(arr,size);
        }
        else if (choose==2) {
            cout << "1. Bogo Sort";
            cout << "\n2. Bubble Sort";
            cout << "\n3. Selection Sort";
            cout << "\n input angka: ";
            cin >> choose;
            if (choose==1) {
                bogoSort(arr,size);
                printArray(arr,size);
            }
            else if (choose==2) {
                bubblesort(arr, size);
                printArray(arr, size);
            }
            else if (choose==3) {
                selectionsort(arr, size);
                printArray(arr, size);
            }
        }
        else if (choose==3) {
            cout << "1. Sequential Search";
            cout << "\n2. Binary Search";
            cout << "\n input angka: ";
            cin >> choose;
            if (choose==1) {
                cout << "Input angka yang dicari: ";
                cin >> key;
                linearSearch(arr, size, key);
                printArray(arr,size);
            }
            else if (choose==2) {
                cout << "Input angka yang dicari: ";
                cin >> key;
                int hasil = binarySearch(arr, size, key);
                if (hasil == -1) { 
                    cout << "Tidak ditemukan!" << endl;
                }
                else {
                    cout << "Ditemukan pada indeks ke " << hasil << endl;
                }
                printArray(arr,size);
            }
        }
        else if (choose==4) {
            exit=true;
        }
        else {
            cout << "Input tidak valid" << endl;
        }
    }
}