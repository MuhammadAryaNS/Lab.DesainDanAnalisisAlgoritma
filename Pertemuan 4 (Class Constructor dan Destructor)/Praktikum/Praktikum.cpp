#include <iostream>
#include <string>
using namespace std;

class pelajaran { // Class Name
	public : // Access specifier
		pelajaran() { // Constructor
			cout << " Ini adalah materi C++ tentang Constructors! ";
		}
};

int main() {
	pelajaran obj; // membuat objek dari sebuah class
	
	return 0;
}

#include <iostream>
using namespace std;

class Laptop {
	private :
		string pemilik;
		string merk;
	public :
		Laptop (string varl, string var2) {
			pemilik = var1;
			merk = var2;
			cout << " Paket Laptop " << merk << " milik " << pemilik << " sudah dikirim " << endl;
		}
};

int main () {
	Laptop laptopFadlan ("Fadlan","Asus");
	Laptop laptopRisma ("Risma","Acer");
	Laptop laptopCarlos ("Carlos","Lenovo");
	
	return 0;
}

#include <iostream>
#include <string>
using namespace std;

class Mahasiswa {
	public :
		Mahasiswa (string nama, int main) : nama_(nama), umur_(umur) {
			cout << " Constructor Mahasiswa " << endl;
		}
	~Mahasiswa() {
		cout << " == Contoh Destructor Mahasiswa == " << endl;
	}
	void TampilkanBiodata() {
		cout << " Nama : " << nama_ << endl;
		cout << " Umur : " << umur_ << endl;
	}
	private :
		string nama_;
		int umur_;
};

int main() {
	Mahasiswa mhs ("Katarina", 20);
	mhs.TampilkanBiodata();
	
	return 0;
}
