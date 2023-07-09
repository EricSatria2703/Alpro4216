#include <iostream>
using namespace std;

// Recursive 2
int pay(int n) {
    int m=0;
    int choose;
    if (n!=0) {
        cout << "Pilih: ";
        cin >> choose;
        if (choose==1) {
            m = m + 20000;
        }
        else if (choose==2) {
            m = m + 25000;
        }
        else if (choose==3) {
            m = m + 30000;
        }
        return m+pay(n-1);   
    }
    return 0;
}

void list() {
    cout << "List harga ikan" << endl;
    cout << "1. Cupang   -- Rp.20000" << endl;
    cout << "2. Guppy    -- Rp.25000" << endl;
    cout << "3. Goldfish -- Rp.30000" << endl;
}

int main()
{
    int amnt;
    list();
    cout << "beli berapa ikan hias?" << endl;
    cin >> amnt;
    cout << pay(amnt) << " Rupiah"; 
    return 0;
}