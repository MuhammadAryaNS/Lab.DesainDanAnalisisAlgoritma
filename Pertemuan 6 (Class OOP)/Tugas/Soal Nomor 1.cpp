#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public :
    	string nama;
    	int umur;
    	string jurusan;
    	string fakultas;
	public:
    	Mahasiswa(string _nama, int _umur, string _jurusan, string _fakultas)
    		: nama(_nama), umur(_umur), jurusan(_jurusan), fakultas(_fakultas) {}
	
	virtual void displayStatus() = 0;
	
	virtual ~Mahasiswa() {}
};

class Alumni : public Mahasiswa {
	public:
    	Alumni(string _nama, int _umur, string _jurusan, string _fakultas)
        	: Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}
    
	void displayStatus() override {
        cout << " Status : Alumni " << endl;
    }
};

class MahasiswaAktif : public Mahasiswa {
	public:
    	MahasiswaAktif(string _nama, int _umur, string _jurusan, string _fakultas)
        	: Mahasiswa(_nama, _umur, _jurusan, _fakultas) {}

    void displayStatus() override {
        cout << " Status : Mahasiswa Aktif " << endl;
    }
};

int main() {
	cout << " >> SOAL NOMOR 1 << " << endl;
	
    char lagi;
    Mahasiswa *daftarMahasiswa[100];

    int count = 0;
    do {
        string nama, jurusan, fakultas;
        int umur;
        char status;
		
        cout << " Masukkan Nama Mahasiswa : ";
        cin >> nama;
        cout << " Masukkan Umur Mahasiswa : ";
        cin >> umur;
        cout << " Masukkan Jurusan Mahasiswa : ";
        cin >> jurusan;
        cout << " Masukkan Fakultas Mahasiswa : ";
        cin >> fakultas;
        cout << " Apakah mahasiswa tersebut alumni? (y/t) : ";
        cin >> status;

        Mahasiswa* mahasiswa;

        if (status == 'Y' || status == 'y') {
            mahasiswa = new Alumni(nama, umur, jurusan, fakultas);
        } else {
            mahasiswa = new MahasiswaAktif(nama, umur, jurusan, fakultas);
        }

        daftarMahasiswa[count] = mahasiswa;
        count++;

        cout << " Tambahkan data mahasiswa lagi? (y/t) : ";
        cin >> lagi;
    } while (lagi == 'Y' || lagi == 'y');
	cout << endl;
    cout << " DAFTAR MAHASISWA INSTITUT BISNIS DAN INFORMATIKA KESATUAN " << endl;
    for (int i = 0; i < count; ++i) {
        cout << " Nama     : " << daftarMahasiswa[i]->nama << endl;
        cout << " Umur     : " << daftarMahasiswa[i]->umur << endl;
        cout << " Jurusan  : " << daftarMahasiswa[i]->jurusan << endl;
        cout << " Fakultas : " << daftarMahasiswa[i]->fakultas << endl;
        daftarMahasiswa[i]->displayStatus();
    }

    return 0;
}
