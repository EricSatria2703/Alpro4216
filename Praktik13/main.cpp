#include <iostream>
using namespace std;

struct node {
    int data;
    string nama;
    node *next;
};

node *head;

void init() {
    head = NULL;
}

int isKosong() {
    if (head==NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

void tmbh_dpn(int dataBaru, string namaBaru) {
    node *nodeBaru =  new node;
    nodeBaru->data = dataBaru;
    nodeBaru->nama = namaBaru;
    nodeBaru->next = NULL;
    if(isKosong()==1) {
        head=nodeBaru;
        // cout << "data entered (head)" << endl;
    }
    else {
        nodeBaru->next = head;
        head = nodeBaru;
        // cout << "data entered" << endl;
    }
}

void tampil() {
    node *nodeBantu;
    nodeBantu = head;

    if(isKosong()!=1) {
        while(nodeBantu != NULL) {
            cout << "NIM: " << nodeBantu->data << endl;
            cout << "Nama: " << nodeBantu->nama << endl;
            nodeBantu = nodeBantu->next;
        }
    }
    else {
        cout << "Empty node" << endl;
    }
}

int main()
{
    init();
    tmbh_dpn(0001, "Adhi");
    tmbh_dpn(0002, "Budi");
    tmbh_dpn(0003, "Cella");
    tmbh_dpn(0004, "Doni");
    tmbh_dpn(0005, "Eric");
    tmbh_dpn(0006, "Fitri");
    tmbh_dpn(0007, "Guntur");
    tampil();
    return 0;
}