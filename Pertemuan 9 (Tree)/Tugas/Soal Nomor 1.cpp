
#include<iostream>

using namespace std;

typedef struct node {
    int data; 
    node *kiri;
    node *kanan;
} node;

node *akar=NULL;

void addNode(node **akar, int isi) { 
    node *baru = new node;
    baru->data = isi;
    baru->kiri = NULL;
    baru->kanan = NULL;
    (*akar) = baru;
}

void preOrder(node *akar) {
    if (akar) {
        cout << akar->data << " "; 
        preOrder(akar->kiri);
        preOrder(akar->kanan);
    }
}

void inOrder(node *akar) {
    if (akar) {
        inOrder(akar->kiri);
        cout << akar->data << " "; 
        inOrder(akar->kanan);
    }
}

void postOrder(node *akar) {
    if (akar) {
        postOrder(akar->kiri);
        postOrder(akar->kanan);
        cout << akar->data << " "; 
    }
}

int main() {
	cout << " >> SOAL NOMOR 1 << " << endl;
    cout << "\tPosisi Awal Tree:\n\n";
    cout << "\t       18\n\t      /  \\\n\t    30    33\n\t   /  \\\n\t 29    32\n\n";
    cout << endl;
    node *akar = NULL;
    addNode(&akar, 18);
    akar->kiri = new node{30, NULL, NULL};
    akar->kanan = new node{33, NULL, NULL};
    akar->kiri->kiri = new node{29, NULL, NULL};
    akar->kiri->kanan = new node{32, NULL, NULL};

    cout << " Tampilan PreOrder  : ";
    preOrder(akar);
    cout << " \n Tampilan InOrder   : ";
    inOrder(akar);
    cout << " \n Tampilan PostOrder : ";
    postOrder(akar);
    return 0;
}
