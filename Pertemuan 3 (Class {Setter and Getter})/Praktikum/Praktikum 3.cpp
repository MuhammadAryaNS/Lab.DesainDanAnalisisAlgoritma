//#include <iostream>
//#include <string>
//using namespace std;
//
//class Silsilah{
//	protected:
//		string orangtua="Albert Wijaya  Jenny Lim ";
//		string anakanak="Agatha Wijaya  Jonatan Wijaya ";
//
//	public :
//		string cekSilsilah() {
//		return " Ayah Bernama " + orangtua.substr(0,orangtua.find(" ") + 7) +
//		       " Dan Ibu Bernama " + orangtua.substr(orangtua.find(" ") + 4);
//	}
//};
//class Cucu : public Silsilah {
//	protected :
//		string cucu = " Wilbert Tan Rayanza Wijaya ";
//		
//		public:
//			string cekAnak() {
//				return " Anak Pertama Keluarga Wijaya Adalah " + anakanak.substr(0,anakanak.find(" ") + 7) +
//				       " Dan Anak Kedua Dari Keluarga Wijaya Adalah " + anakanak.substr(anakanak.find(" ") + 4);
//			}
//};
//
//class Anak : public Cucu {
//	public:
//		string lihatSilsilahnya() {
//			return " Silsilah Keluarga Wijaya ";
//		}
//		string cekCucu() {
//			return " Cucu Pertama Bernama " +cucu.substr(0,cucu.find(" ") + 4) +
//			       " Dan Cucu kedua Bernama " + cucu.substr(cucu.find(" ") + 4);
//		}
//};
//
//int main() {
//	Anak silsilahWijaya;
//	cout << silsilahWijaya.lihatSilsilahnya() << endl;
//	cout << silsilahWijaya.cekSilsilah() << endl;
//	cout << silsilahWijaya.cekAnak() << endl;
//	cout << silsilahWijaya.cekCucu() << endl;
//
//	return 0;
//}

#include <iostream>
#include <string>
using namespace std;

class Hewan {
	private :
		string nama;
		string spesies;
	public :
		void setNama(string n) {
			nama = n;
		}
		void setSpesies(string s) {
			spesies = s;
		}
		string getNama() {
			return nama;
		}
		string getSpesies() {
			return spesies;
		}
};

int main(){
	Hewan hewan;
	hewan.setNama("Kucing");
	hewan.setSpesies("Felis Catus");
	cout<<" Nama\t: "<<hewan.getNama() << endl;
	cout<<" Spesies\t : " << hewan.getSpesies() << endl;
	
	return 0;
}

