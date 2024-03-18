#include <iostream>
using namespace std;
void sorting (int arr[], int n){
	int y, b;
	for (int a=1; a<n; a++){
		y = arr[a];
		b = a - 1;
		while (b >= 0 && arr[b] < y){
			arr[b+1] = arr[b];
			b = b - 1;
		}
		arr[b+1] = y;
		cout << endl;
		cout << " Proses Sorting " << endl;
		for (int z=0; z<n; z++){
			cout << " " << arr[z];
		}
	}
	cout << endl;
}

int main(){
	cout << " >> PROGRAM KEDUA " << endl;
	int data[10];
	int n;
	cout << " Masukan banyak array : ";
	cin >> n;
	for (int x=0; x<n; x++){
		cout << " Masukan angka ke " << x << " : ";
		cin >> data[x];
		cout << endl;
	}
	sorting(data, n);
	cout << " Hasil akhir " << endl;
	for (int x=0; x<n; x++){
		cout << " " << data[x];
	}
	return 0;
}
