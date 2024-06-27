#include <iostream>
#include <cstdlib>
#define MIN_TABLE_SIZE 10

using namespace std;

// Deklarasi Jenis Node
enum EntryType {Sah, Kosong, Hapus};

// Deklarasi Node
struct HashNode {
    int element;
    enum EntryType info;
};

// Deklarasi Tabel
struct HashTable {
    int size;
    HashNode *table;
};

// Berfungsi untuk menghasilkan Hash pertama
int HashFunc1(int key, int size) {
    return key % size;
}

// Berfungsi untuk menghasilkan Hash kedua
int HashFunc2(int key, int size) {
    return (key * size - 1) % size;
}

// Berfungsi untuk inisialisasi Tabel
HashTable *inisialisasiTable(int size) {
    HashTable *htable;
    if (size < MIN_TABLE_SIZE) {
        cout << " Ukuran Tabel Terlalu Kecil " << endl;
    	return NULL;
    }
    htable = new HashTable;
    if (htable == NULL) {
        cout << " Luar Biasa " << endl;
    	return NULL;
    }
    htable->size = size;
    htable->table = new HashNode [htable->size];
    if (htable->table == NULL) {
        cout << " Ukuran Tabel Terlalu Kecil " << endl;
        return NULL;
    }
    for (int i = 0; i < htable->size; i++) {
        htable->table[i].info = Kosong;
        htable->table[i].element = NULL;
    }
    return htable;
}

// Berfungsi untuk menemukan elemen dari Tabel
int Find(int key, HashTable *htable) {
    int hashVal = HashFunc1(key, htable->size);
    int stepSize= HashFunc2(key, htable->size);
    while (htable->table[hashVal].info != Kosong && htable->table[hashVal].element != key) {
    	hashVal = hashVal + stepSize;
        hashVal = hashVal % htable->size;
    }
    return hashVal;
}

// Berfungsi untuk memasukan elemen ke dalam Tabel
void Insert(int key, HashTable *htable) {
    int pos = Find(key, htable);
    if (htable->table[pos].info != Sah ) {
        htable->table[pos].info = Sah;
        htable->table[pos].element = key;
    }
}

// Berfungsi untuk mengulangi Tabel
HashTable *Rehash(HashTable *htable) {
    int size = htable->size;
    HashNode *table = htable->table;
    htable = inisialisasiTable(2 * size);
    for (int i = 0; i < size; i++) {
        if (table[i].info == Sah)
            Insert(table[i].element, htable);
    }
    free(table);
    return htable;
}

// Berfungsi untuk mengambil Tabel
void Retrieve(HashTable *htable) {
    for (int i = 0; i < htable->size; i++) {
        int value = htable->table[i].element;
        if (!value)
            cout << " Posisi : " << i + 1 << " Element : Null " << endl;
        else
            cout << " Posisi : " << i + 1 << " Element : " << value << endl;
    }
 
}

int main() {
    int value, size, pos, i = 1;
    int pilihan;
    HashTable *htable;
    while(1) {
    	cout << " ================================= " << endl;
        cout << "    Operasi pada Double Hashing   " << endl;
        cout << " ================================= " << endl;
        cout << " 1. Inisialisasi ukuran tabel " << endl;
        cout << " 2. Masukan elemen ke dalam tabel " << endl;
        cout << " 3. Tampilkan tabel Hash " << endl;
        cout << " 4. Ulangin tabel " << endl;
        cout << " 5. Keluar " << endl;
        cout << " Masukan pilihan Anda : ";
        cin >> pilihan;
        switch(pilihan) {
        case 1:
            cout << " Masukan ukuran tabel Hash : ";
            cin >> size;
            htable = inisialisasiTable(size);
            break;
        case 2:
            if (i > htable->size) {
                cout << " Tabel sudah penuh, ulangi tabelnya " << endl;
                continue;
            }
        	cout << " Masukkan elemen yang akan disisipkan : ";
        	cin >> value;
            Insert(value, htable);
            i++;
            break;
        case 3:
            Retrieve(htable);
            break;
        case 4:
            htable = Rehash(htable);
            break;
        case 5:
            exit(1);
        default:
           cout << " Masukkan pilihan yang benar ";
       }
    }
    return 0;
}
