#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
private :
    string nama;
    string npm;

public :
    Mahasiswa() : nama(""), npm("") {}

    Mahasiswa(string _nama, string _npm) : nama(_nama), npm(_npm) {}

    void setNama(string _nama) {
        nama = _nama;
    }

    void setNPM(string _npm) {
        npm = _npm;
    }

    string getNama() const {
        return nama;
    }

    string getNPM() const {
        return npm;
    }
};

int main() {
    int jumlahMahasiswa;
    cout << " Masukkan jumlah Mahasiswa : ";
    cin >> jumlahMahasiswa;

    Mahasiswa *daftarMahasiswa = new Mahasiswa[jumlahMahasiswa];
	cout << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        string nama, npm;
        cout << " Masukkan Nama Mahasiswa " << i + 1 << " : ";
        cin >> nama;
        cout << " Masukkan NPM Mahasiswa " << i + 1 << " : ";
        cin >> npm;
		cout << endl;
        daftarMahasiswa[i] = Mahasiswa(nama, npm);
    }

    for (int i = 0; i < jumlahMahasiswa; i++) {
    	cout << " Mahasiswa " << i + 1 << endl;
        cout << "   Nama : " << daftarMahasiswa[i].getNama();
		cout << endl << "   NPM  : " << daftarMahasiswa[i].getNPM() << endl;
    }
   
    return 0;
}
