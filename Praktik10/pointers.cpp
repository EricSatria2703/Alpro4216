#include <iostream>
using namespace std;

int passValue(int i, int j){
    return i+j;
}

int passReference(int *nilai1){
    return *nilai1 + 5;
}

int main() {
    int a[5] = {1,2,3,4,5};

    int *ptr = a;
    cout << ptr << endl;
    cout << &a[0] << endl;
    cout << *ptr << endl;
    cout << a[0] << endl;
    
    for(int i=0;i<5;i++){
        cout << ptr++ << endl;
    }

    // for(int i=0;i<5;i++) {
    //     cout << &a[i] << endl;
    //     cout << *a+i << endl;
    // }

    // int b[5] = {};
    // for(int i=0;i<5;i++) {
    //     cout << &b[i] << endl;
    // }

    // int a=10;
    // int *p = &a;
    // int **q = &p;
    // int hsl = *p+5;
    // int nilai = 7;  
    // cout << p << endl;
    // cout << *p << endl;
    // cout << &p << endl;
    // cout << q << endl;
    // cout << &q << endl;
    // cout << hsl << endl;
    // cout << passValue(7,4) << endl;
    // cout << passReference(&nilai) << endl;

    return 0;
}


