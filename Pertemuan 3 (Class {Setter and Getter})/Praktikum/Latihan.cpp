#include<iostream>
#include<string>
using namespace std;

class Biodata {
	private:
		string nama;
		int npm;
	public:
		void setNama(string n) {
			nama=n;
		}
		void setNpm(int s) {
			npm=s;
		}
		string getNama() {
			return nama;
		}
		int getNpm() {
			return npm;
		}
};

int main() {
	Biodata biodata;
	string nama;
	int npm;
	int n;
	
	cout << " Masukkan Nama : ";
	getline(cin,nama);
	biodata.setNama(nama);
	cout << " Masukkan NPM  : ";
	cin >> npm;
	biodata.setNpm(npm);
	
	cout << endl;
	cout << " >> BIODATAKU << " << endl;
	cout << " Nama : " << biodata.getNama() << endl;
	cout << " NPM  : " << biodata.getNpm();
	
	return 0;
}
