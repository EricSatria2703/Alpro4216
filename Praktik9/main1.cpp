#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int amnt;
    cout << "Kalkulator Takaran Caviar" << endl;
    cout << "Untuk tiap porsi yang dihidangkan, takaran caviar yang diperlukan akan naik sesuai dengan deret fibonacci" << endl;
    cout << "Inputkan banyak porsi: ";
    cin >> amnt;
    cout << "Takaran caviar yang diperlukan adalah " << fibonacci(amnt) << " gram";
    return 0;
}