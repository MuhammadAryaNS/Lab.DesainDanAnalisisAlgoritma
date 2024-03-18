#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	int i, j, tap;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				tap = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tap;
			}
		}
	}
}

int main() {
	int array[100], n, i, j;
	cout << " Masukkan banyak elemen : ";
	cin >> n;
	cout << " Masukkan nilai : \n";
	for (i = 0; i < n; i++) {
		cin >> array[i];
	}
	bubbleSort(array, n);
	cout << " Hasil pengurutan dengan algoritma bubble sort :\n";
	for (i = 0; i < n; i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
	return 0;
}

//#include<iostream>
//using namespace std;
//int main()
//{
//    int i, arr[3], j, temp;
//    cout<<" Masukkan 4 Elemen : ";
//    for(i=0; i<4; i++)
//        cin>>arr[i];
//    cout<<endl;
//    for(i=0; i<4; i++)
//    {
//        for(j=0; j<(4-i-1); j++)
//        {
//            if(arr[j]>arr[j+1])
//            {
//                temp = arr[j];
//                arr[j] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//        cout<<" Tahap "<<i+1<<": ";
//        for(j=0; j<4; j++)
//            cout<<arr[j]<<" ";
//        cout<<endl;
//    }
//    
//    cout << "\nHasil : "; 
//    for(j=0; j<4; j++) {
//    	cout<<arr[j]<<" ";
//	}
//	
//    cout<<endl;
//    return 0;
//}
