#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        cout << n << " ";
    }
}

int main()
{
    int panjang;
    cout << "Input panjang deret angka: ";
    cin >> panjang;
    printNumbers(panjang);
}