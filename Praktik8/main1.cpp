#include <iostream>
using namespace std;

// 2. Buat 3 Recursive yang berbeda dalam tema perikanan
// Recursive 1
string fish(int n) {
    string ikan;
    if (n==1) {
        cin >> ikan;
        return ikan + " adalah jenis ikan yang anda punya";
    }
    else {
        cin >> ikan;
        return ikan + " " + fish(n-1);
    }
}

int main()
{
    int amnt;
    cout << "Anda punya berapa ikan?" << endl;
    cin >> amnt;
    cout << "Sebutkan ikan-ikan tersebut!" << endl;
    cout << fish(amnt);
    return 0;
}