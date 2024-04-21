#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
	protected :
    	string merek;
    	int tahunProduksi;
	public :
    Kendaraan() {}
    Kendaraan(string _merek, int _tahunProduksi) : merek(_merek), tahunProduksi(_tahunProduksi) {}

    void inputInfo() {
        cout << " Masukkan Merek Kendaraan : ";
        getline(cin, merek);
        cout << " Masukkan Tahun Produksi : ";
        cin >> tahunProduksi;
        cin.ignore();
    }

    void info() {
        cout << " Merek : " << merek << ", " << " Tahun Produksi : " << tahunProduksi << endl;
    }
};

class Mobil : public Kendaraan {
	protected :
    	int jumlahPintu;
	public :
    	Mobil() {}
    	Mobil(string _merek, int _tahunProduksi, int _jumlahPintu) : Kendaraan(_merek, _tahunProduksi), jumlahPintu(_jumlahPintu) {}

    void inputInfo() {
        Kendaraan::inputInfo();
        cout << " Masukkan Jumlah Pintu : ";
        cin >> jumlahPintu;
        cin.ignore();
    }

    void info() {
        Kendaraan::info();
        cout << " Jumlah Pintu : " << jumlahPintu << endl;
    }
};

int main() {
	cout << " >> SOAL NOMOR 2 << " << endl;
    string merekMobil;
    int tahunProduksiMobil, jumlahPintuMobil;

    Mobil mobil;

    cout << " Data Informasi Mobil " << endl;
    mobil.inputInfo();
	cout << endl;
    cout << " Informasi Mobil " << endl;
    mobil.info();

    return 0;
}
