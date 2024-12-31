#include <iostream>
using namespace std;
int main ()
{
	int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
	
	cout << "Masukan jumlah baris matriks: ";
	cin >> m;
	cout << "Masukan jumlah kolom matriks: ";
	cin >> n;
	
	cout << "Masukan elemen matriks pertama: \n";
	for (i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin >> matriks1[i][j];
		}
	}
	cout << "Masukan elemen matriks kedua: \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			cin >> matriks2[i][j];
		}
	}
	cout << "Hasil penjumlahan matriks: \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			hasil[i][j] = matriks1[i][j] + matriks2[i][j];
			cout << hasil[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Hasil penjumlahan matriks: \n";
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];
			cout << hasil[i][j] << "\t";
		}
		cout << endl;
	}
}
