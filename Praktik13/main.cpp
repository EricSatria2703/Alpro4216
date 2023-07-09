#include <iostream>
using namespace std;

// struct node {
//     int data;
//     struct node* next;
// };

// struct node* head = NULL;
// void insert(int new_data){
//     struct node* new_node = (struct node*) malloc(sizeof(struct node));
//     new_node->data = new_data;
//     new_node->next = head;
//     head = new_node;
// }

// void display(){
//     struct node* ptr;
//     ptr = head;
//     while (ptr != 0){
//         cout << ptr->data <<" ";
//         ptr = ptr->next;
//     }
// }

struct node {
    int data;
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

void tmbh_dpn(int dataBaru) {
    node *nodeBaru =  new node;
    nodeBaru->data = dataBaru;
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
            cout << nodeBantu->data << " ";
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
    tmbh_dpn(4);
    tmbh_dpn(10);
    tmbh_dpn(22);
    tmbh_dpn(3);
    tmbh_dpn(15);
    tampil();
    return 0;
}