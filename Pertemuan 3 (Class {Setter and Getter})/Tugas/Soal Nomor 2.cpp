#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private :
    string nama;
    int npm;
    string kelas;
    bool statusPinjam;
    
public :
    Mahasiswa() : nama(""), npm(0), kelas(""), statusPinjam(false) {}

    void setNama(string _nama) {
        nama = _nama;
    }
    void setNpm(int _npm) {
        npm = _npm;
    }
    void setKelas(string _kelas) {
        kelas = _kelas;
    }
    void setStatusPinjam(bool pinjam) {
        statusPinjam = pinjam;
    }
    string getNama() const {
        return nama;
    }
    int getNpm() const {
        return npm;
    }
    string getKelas() const {
        return kelas;
    }
    bool getStatusPinjam() const {
        return statusPinjam;
    }
    void pinjamBuku(string judulBuku) {
        if (!statusPinjam) {
            cout << endl << " Mahasiswa bernama " << nama << " dari kelas " << kelas << " dengan NPM " << npm << " meminjam buku " << endl;
			cout << " " << judulBuku << " dari perpustakaan. " << endl;
            statusPinjam = true;
        } else {
            cout << " Maaf, Mahasiswa bernama " << nama << " dari kelas " << kelas << " dengan NPM " << npm << " sudah meminjam buku." << endl;
        }
    }
    void kembalikanBuku(string judulBuku) {
        if (statusPinjam) {
            cout << endl << " Mahasiswa bernama " << nama << " dari kelas " << kelas << " dengan NPM " << npm << endl;
			cout << " mengembalikan buku " << judulBuku << " ke perpustakaan. " << endl;
            statusPinjam = false;
        } else {
            cout << " Maaf, Mahasiswa bernama " << nama << " dari kelas " << kelas << " dengan NPM " << npm << " tidak sedang meminjam buku." << endl;
        }
    }
};

int main() {
    Mahasiswa mahasiswa;

    string nama, kelas;
    int npm;
    cout << " Masukkan Nama Mahasiswa  : ";
    getline(cin, nama);
    cout << " Masukkan NPM Mahasiswa   : ";
    cin >> npm;
    cin.ignore();
    cout << " Masukkan Kelas Mahasiswa : ";
    getline(cin, kelas);

    mahasiswa.setNama(nama);
    mahasiswa.setNpm(npm);
    mahasiswa.setKelas(kelas);

    string judulBuku;
    cout << " Masukkan judul buku yang ingin dipinjam : ";
    getline(cin, judulBuku);
    mahasiswa.pinjamBuku(judulBuku);
	cout << endl;
    cout << " Masukkan judul buku yang ingin dikembalikan : ";
    getline(cin, judulBuku);
    mahasiswa.kembalikanBuku(judulBuku);

    return 0;
}
