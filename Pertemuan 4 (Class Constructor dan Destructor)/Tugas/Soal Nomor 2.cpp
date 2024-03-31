#include <iostream>
#include <string>
using namespace std;

class Contact {
	private :
    	string name;
    	string phoneNumber;
    	
	public :
    	Contact() {}
		Contact(string name, string phoneNumber) {
        	this -> name = name;
        	this -> phoneNumber = phoneNumber;
    }
    
    string getName() {
        return name;
    }
    
    string getPhoneNumber() {
        return phoneNumber;
    }
};

int main() {
    const int maxContacts = 10;
    Contact contacts[maxContacts];
    
	int contactCount = 0;
	string choice;
	
	cout << " >> SOAL NOMOR 2 << " << endl;
    cout << " Masukkan kontak (maksimal 10 kontak) : " << endl;
    
	while (contactCount < maxContacts) {
        string name, phoneNumber;
        cout << " Masukkan nama kontak ke-" << (contactCount + 1) << " : ";
        getline(cin, name);
        cout << " Masukkan nomor telepon kontak ke-" << (contactCount + 1) << " : ";
        getline(cin, phoneNumber);

        contacts[contactCount] = Contact(name, phoneNumber);
        contactCount++;

        cout << " Kontak berhasil ditambahkan." << endl;
        cout << " Tambahkan kontak lagi (y/n) : ";
        getline(cin, choice);
        if (choice != "Y" && choice != "y") {
            break;
        }
    }
    
	cout << " Daftar Kontak : " << endl;
    
	for (int i = 0; i < contactCount; i++) {
        cout << " Kontak ke-" << (i + 1) << " Nama : " << contacts[i].getName() << endl;
		cout << " Nomor Telepon : " << contacts[i].getPhoneNumber() << endl;
        cout << " ---------------------------------------------------- " << endl;
    }
    
    return 0;
}
