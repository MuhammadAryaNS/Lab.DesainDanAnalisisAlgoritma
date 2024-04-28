#include <iostream>
#include <string>
using namespace std;

// Struktur untuk menyimpan informasi barang
struct Barang {
    string nama;
    int harga;
};

// Fungsi untuk pencarian sequential
int cariBarang(const Barang daftar[], int n, string barangDicari) {
    for (int i = 0; i < n; i++) {
        if (daftar[i].nama == barangDicari) {
            return i; // Mengembalikan indeks barang yang ditemukan
        }
    }
    return -1; // Mengembalikan -1 jika barang tidak ditemukan
}

int main() {
    // Array dari struktur Barang
    Barang daftarBarang[5] = {
        {"Buku", 5000},
        {"Pensil", 1000},
        {"Pulpen", 2000},
        {"Penghapus", 500},
        {"Penggaris", 1500}
    };

    int n = 5; // Jumlah barang dalam daftar
    string barangDicari;
    cout << "Masukkan nama barang yang ingin dicari: ";
    getline(cin, barangDicari); // Menggunakan getline untuk menerima input string dengan spasi

    // Memanggil fungsi untuk mencari barang
    int posisi = cariBarang(daftarBarang, n, barangDicari);

    // Menampilkan hasil pencarian
    if (posisi != -1) {
        cout << "Barang " << barangDicari << " ditemukan dengan harga Rp" << daftarBarang[posisi].harga << endl;
    } else {
        cout << "Maaf, barang " << barangDicari << " tidak ditemukan dalam daftar" << endl;
    }

    return 0;
}
