#include <iostream>
using namespace std;

void bubblesort(int array[], int size) {
    int temp;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(array[j]<array[j+1]){
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

void printArray(int array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

int main()
{
    int arr[] = {4,9,1,10,11,6,9,3,5};
    int size = sizeof(arr)/sizeof(int);
    bubblesort(arr,size);
    printArray(arr,size);
}