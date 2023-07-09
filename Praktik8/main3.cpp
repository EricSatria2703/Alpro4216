#include <iostream>
using namespace std;

// Recursive 3
string list(string a[], int n, int m) {
    if (n>=m) {
        return "";
    }
    else {
        return a[n]+" "+list(a,n+1,m);   
    }
    
}

int main()
{
    string fish[3] = {"lele","bawal","gurami"};
    cout << list(fish,0,3) << endl;
    cout << list(fish,2,3) << endl;
    cout << list(fish,0,2) << endl;
    return 0;
}