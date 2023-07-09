#include <iostream>
using namespace std;

// 1. Buat penerapan Recursive  Faktorial dalam tema perkebunan
int fact(int n) {
    if(n==1) {
        return n;
    }
    else {
        return n*fact(n-1);
    }
}

int main ()
{
    int area;
    cout << "Untuk tiap meter persegi akan menghasilkan panen sebanyak faktorial dari banyak luas" << endl;
    cout << "Inputkan luas kebun (m^2): ";
    cin >> area;
    cout << "Hasil panen dari luas " << area << " meter persegi adalah " << fact(area) << " gram";
    return 0;
}