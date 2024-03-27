#include<iostream>
using namespace std;

void quick(int arr[], int kiri, int kanan) {
    if (kiri >= kanan) {
        return;
    }
    
    int x = kiri, y = kanan;
    int temp;
    int tengah = arr[kiri + (kanan - kiri) / 2];
    
    while (x <= y) {
        while (arr[x] > tengah) { 
            x++;
        }
        while (arr[y] < tengah) {
            y--;
        }
        if (x <= y) {
            temp = arr[x];
            arr[x] = arr[y];
            arr[y] = temp;
            x++;
            y--;
        }
    }
    quick(arr, kiri, y);
    if (x < kanan) {
        quick(arr, x, kanan);
    }
}

int main() {
    int n;
    cout << " Masukkan Banyak Data : ";
    cin >> n;

    int data[n];
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << " Masukkan Angka : ";
        cin >> data[i];
    }
	cout << endl;
    cout << " Data Sebelum Diurutkan : ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }
    quick(data,0,n-1);
	cout<<endl;
	cout<<" Data Setelah Diurutkan : ";
	for(int i=0;i<n;i++) {
	cout<<data[i]<<" ";
	}
}
