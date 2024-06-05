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
	cout << " ============================================================================ " << endl;
	cout << " >> SOAL NOMOR 1 << " << endl;
	cout << " Buatlah sebuah program c++ mengenai konsep penerapan tree, dengan kriteria : " << endl;
	cout << " 1. Bilangan/value diinput diprogram " << endl;
	cout << " 2. Bilangan yang diinput ke program 12, 16, 20, 24, 32 " << endl;
	cout << " 3. Dapat mengurutkan bilangan yang diinput secara pre-order " << endl;
	cout << " 4. Dapat mengurutkan bilangan yang diinput secara in-order " << endl;
	cout << " 5. Dapat mengurutkan bilangan yang diinput secara post-order " << endl;
	cout << " ============================================================================ " << endl;
	
    node *akar = NULL;
    addNode(&akar, 12);
    akar->kiri = new node{16, NULL, NULL};
    akar->kanan = new node{20, NULL, NULL};
    akar->kiri->kiri = new node{24, NULL, NULL};
    akar->kiri->kanan = new node{32, NULL, NULL};
	
    cout << (" \n Urutan Bilangan Secara Pre-Order  : ");
	preOrder(akar);
	cout << (" \n Urutan Bilangan Secara In-rder    : ");
	inOrder(akar);
	cout << (" \n Urutan Bilangan Secara Post-Order : ");
	postOrder(akar);
	
    return 0;
}
