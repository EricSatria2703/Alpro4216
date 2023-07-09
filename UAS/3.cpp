
// NOMOR 3

#include <iostream>
using namespace std;

struct node {
    string data;
    int amount;
    node *next;
};

struct node* head = NULL;

void tambahDepan(string new_data){
    node *NodeBaru = new node;
    NodeBaru->data = new_data; 
    NodeBaru->next = head;
    head = NodeBaru;
}

void tambahBelakang(node** headBaru,string new_data) {
    node *NodeBaru = new node;
    node *last = *headBaru;
    NodeBaru->data = new_data;
    NodeBaru->next = NULL;
    if (*headBaru==NULL) {
        *headBaru = NodeBaru;
        return;
    }
    while (last->next!=NULL) {
        last = last->next;
    }
    last->next=NodeBaru;
    return;
}

void Tampil(){
    node *ptr;
    ptr = head;
    int jmlhTongkol = 0;
    int jmlhSarden = 0;
    int jmlhSalmon = 0;
    int jmlhHiu = 0;
    cout << "Daftar Tangkapan" << endl;
    while (ptr != NULL){
        if (ptr->data == "Tongkol") {
            jmlhTongkol++;
        }
        else if (ptr->data == "Sarden") {
            jmlhSarden++;
        }
        else if (ptr->data == "Salmon") {
            jmlhSalmon++;
        }
        else if (ptr->data == "Hiu") {
            jmlhHiu++;
        }   
        cout << ptr->data << endl;
        ptr = ptr->next;
    }
    cout << "Jumlah Ikan Tongkol: ";
    cout << jmlhTongkol << endl;
    cout << "Jumlah Ikan Sarden: ";
    cout << jmlhSarden << endl;
    cout << "Jumlah Ikan Salmon: ";
    cout << jmlhSalmon << endl;
    cout << "Jumlah Ikan Hiu: ";
    cout << jmlhHiu << endl;
}

int main()
{
    
    
    tambahBelakang(&head, "Hiu");
    tambahDepan("Tongkol");
    tambahDepan("Sarden");
    tambahDepan("Salmon");
    tambahDepan("Tongkol");
    tambahDepan("Hiu");
    tambahBelakang(&head, "Sarden");

    Tampil();
    return 0;
}