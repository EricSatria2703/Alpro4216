#include <iostream>

using namespace std;

void breaks(int n) {
    for(int i=0;i<n;i++) {
        cout << "====================================================================" << endl;
    }
}

int volts(int a, int r) {
    return a*r;
}


int main()
{
    /*breaks(2);
    cout << volts(3, 4) << endl;*/
    int hasil = 0;
    int x;
    int y;
    int sums[3]={};
    for (int i=0;i<3;i++) {
        cout << "Rangkaian ke " << i+1 << endl;
        cout << "Input a" << endl;
        cin >> x;
        cout << "Input r" << endl;
        cin >> y;
        sums[i]=volts(x,y); 
    }

    for (int i=0;i<3;i++) {
        hasil = hasil + sums[i];
    }

    cout << "Jumlah voltase seluruh rangkaian" << endl; 
    cout << hasil << endl;
    return 0;
}
