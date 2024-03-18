#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
	cout << " >> PROGRAM PERPUSTAKAAN SEDERHANA << " << endl;
	int x, y, a, m, n;
	char nama[5][20], temp[40];
	cout << " Masukan Judul Buku " << endl;
	for (x=1; x<=4; x++){
		cout << " >> Buku ";
		gets(nama[x]);
		if (x>1){
			for (y=1; y<=(x-1); y++){
				a = (strcmp(nama[x], nama[y]));
				if (a<=0){
					strcpy (temp, nama[x]);
					for (n=(x-1); n>=y; n--){
						m = (n+1);
						strcpy (nama[m], nama[n]);
					}
					strcpy (nama[y], temp);
				}
			}
		}
	}
	cout << " Setelah diurutkan : " << endl;
	for (x=1; x<=4; x++){
		cout << " " << x << ". " << nama[x];
		cout << endl;
	}
	getch();
}
