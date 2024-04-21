#include <iostream>
using namespace std;

class BangunDatar {
	public:
    	virtual double hitungLuas() = 0;
};

class Persegi : public BangunDatar {
	private:
    	double sisi;
	public:
    	Persegi(double s) : sisi(s) {}
		double hitungLuas() {
        	return sisi * sisi;
    }
};

class PersegiPanjang : public BangunDatar {
	private:
    	double panjang;
    	double lebar;
	public:
    	PersegiPanjang(double p, double l) : panjang(p), lebar(l) {}
		double hitungLuas() {
        	return panjang * lebar;
    }
};

class Segitiga : public BangunDatar {
	private:
    	double alas, tinggi;
	public:
    	Segitiga(double a, double t) : alas(a), tinggi(t) {}
	    double hitungLuas() {
    	    return (alas * tinggi) / 2;
    }
};

int main() {
    double v, w, x, y, z;
    cout << " Masukkan Sisi Persegi : ";
    cin >> v;
    cout << " Masukkan Panjang Persegi panjang : ";
    cin >> w;
    cout << " Masukkan Lebar Persegi Panjang : ";
    cin >> x;
    cout << " Masukkan Alas Segitiga : ";
    cin >> y;
    cout << " Masukkan Tinggi Segitiga : ";
    cin >> z;

    BangunDatar *bangun1 = new Persegi(v);
    BangunDatar *bangun2 = new PersegiPanjang(w, x);
    BangunDatar *bangun3 = new Segitiga(y, z);
    cout << endl;
    cout << " Luas Bangun Datar : " << endl;
    cout << " Luas Persegi : " << bangun1->hitungLuas() << endl;
    cout << " Luas Persegi Panjang : " << bangun2->hitungLuas() << endl;
    cout << " Luas Segitiga : " << bangun3->hitungLuas() << endl;

    return 0;
}
