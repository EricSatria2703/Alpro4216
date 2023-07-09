#include <iostream>
using namespace std;

void menu() {
    cout << "1. Lihat Barang (Pointer)" << endl;
    cout << "2. Tambah Barang (ADT)" << endl;
    cout << "3. Request Barang (Linked List)" << endl;
    cout << "4. Exit" << endl;
}

typedef struct barangbaru {
    string nama;
    int harga;
} inputbrg;

int recursive(int x) {
    if (x==0) {
        return 1;
    }
    else {
        cout << "===============================" << endl;
        return recursive(x-1);
    }
}

struct node {
    string data;
    node *next;
};

struct node* head = NULL;

void insert(string new_data){
    node *NodeBaru = new node;
    NodeBaru->data = new_data;
    NodeBaru->next = head;
    head = NodeBaru;
}

void display(){
    node *ptr;
    ptr = head;
    cout << "List Request:" << endl;
    while (ptr != NULL){
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
}

int main()
{
    string barang[5] = {"Beras","Susu","Saus","Kecap","Teh"};
    bool exit = false;
    int choose;
    int kali;
    string data;
    while (!exit) {
        recursive(2);
        cout << "Supermarket ABC" << endl;
        menu();
        cout << "Pilih menu: " << endl;
        cin >> choose;
        if (choose == 1) {
            string *lihat = barang;
            cout << "List barang: " << endl;
            for (int i=1;i<6;i++) {
                cout << i << ". "<< *lihat++ << endl;
            }
        }

        else if (choose == 2) {
            inputbrg list[2];
            for (int i=0;i<2;i++) {
                cout << "Inputkan nama barang: ";
                cin >> list[i].nama;
                cout << "Inputkan harga: ";
                cin >> list[i].harga;
            }
            for (int i=0;i<2;i++) {
                cout << list[i].nama << " ";
                cout << list[i].harga << endl;
                cout << "Barang berhasil ditambahkan!" << endl;
            }     
        }

        else if (choose == 3) {
            cout << "Request berapa barang?" << endl;
            cin >> kali;
            for (int i=0;i<kali;i++) {
                cout << "Masukkan nama barang: ";
                cin >> data;
                insert(data);
            }
            display();

        }

        else if (choose == 4) {
            exit = true;
        }

        else {
            cout << "Input tidak valid!" << endl;
        } 
    }

    return 0;
}