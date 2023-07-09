//NOMOR 2
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void shuffle(string e[], int r) {
    for (int i = 0; i < r; i++)
        swap(e[i], e[rand() % r]);
}

bool isSorted(string e[], int r)
{
    while (--r > 0)
        if (e[r] < e[r - 1])
            return false;
    return true;
}

void bogoSort (string e[], int c) {
    while (!isSorted(e,c)) {
        shuffle(e, c);
    }
}

void printArray(string array[], int size) {
    for(int i=0;i<size;i++) {
        cout << array[i] << ",";
    }
}

int main()
{
    string pertanian[4] = {"Timun", "Kunyit", "Cabai", "Bayam"};
    cout << "Sebelum bogo sort:" << endl;
    printArray(pertanian,4);
    cout << "\nSetelah bogo sort: " << endl;
    bogoSort(pertanian,4);
    printArray(pertanian,4);

    return 0;
}