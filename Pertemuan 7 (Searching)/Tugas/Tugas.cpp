#include <iostream>
#include <string>
using namespace std;

int binarySearch(char rak[], int n, char target) {
    int low = 0;
    int high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (rak[mid] == target) {
            return mid + 1; 
        } else if (rak[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1; 
}

int main() {
    char rak[] = {'A', 'B','C', 'D', 'E','F', 'G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int num_racks = sizeof(rak) / sizeof(rak[0]);
    char input;
    bool ulang= true;

    while (ulang) {
        cout << " Masukkan Huruf Awal Dari Judul Buku Yang Ingin Dicari (Huruf Besar) : ";
        cin >> input;

        int result = binarySearch(rak, num_racks, input);

        if (result != -1) {
            cout << " Buku Dengan Huruf Awal '" << input << "' Dapat Ditemukan Di Rak Nomor " << result << endl;
        } else {
            cout << " Buku Dengan Huruf Awal '" << input << "' Tidak Ditemukan. " << endl;
        }

        char choice;
        cout << " Apakah Anda Ingin Mencari Buku Lain? (y/n) : ";
        cin >> choice;
        if (choice != 'Y' && choice != 'y') {
            ulang = false;
        }
    }

    return 0;
}
