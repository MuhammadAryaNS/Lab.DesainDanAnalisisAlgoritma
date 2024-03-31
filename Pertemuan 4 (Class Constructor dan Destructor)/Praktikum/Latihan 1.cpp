#include<iostream>
using namespace std;

class info {
	private :
		string a,b;
		int c;
	
	public :
		info(string nama, int umur, string alamat) 
		: a(nama), c(umur), b(alamat) {
			cout << " Informasi Biodata Anda : " << endl;
		}
	
		~info() {
			cout << " ";
		}
		
		void data() {
			cout << "    Nama   : " << a << endl
				 << "    Umur   : " << c << endl
				 << "    Alamat : " << b << endl;
		}
};

int main(){
	int x;
	string y, z;
	
	cout << " Masukan Nama Anda : ";
		getline(cin,y);
		cout << " Masukan Usia anda : ";
		cin >> x;
		cout << " Masukan Alamat Anda : ";
		cin.ignore();
		getline(cin,z);
		
	{
		info obj(y, x, z);
		obj.data();
	}
	
	return 0;
}
