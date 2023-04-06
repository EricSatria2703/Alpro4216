#include <iostream>
using namespace std;

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

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
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
    int list[6] = {13,14,2,8,25,6};
    selectionsort(list, 6);
    printArray(list, 6);
    int hasil = binarySearch(list, 6, 6);
    cout << "\nDitemukan pada indeks ke " << hasil << "\n";
}