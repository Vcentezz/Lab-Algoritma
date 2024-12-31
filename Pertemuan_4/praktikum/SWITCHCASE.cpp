#include <iostream>
using namespace std;

int main()
{
	char kode;
	
	cout<<"Masukan Kode Barang A-F = ";
	cin>>kode;
	
	switch(kode){
		case 'A':
		cout<<"Alat A";
		break;
		case 'B':
		cout<<"Alat B";
		break;
		case 'C':
		cout<<"Alat C";
		break;
		case 'D':
		cout<<"Alat D";
		break;
		case 'E':
		cout<<"Alat E";
		break;
		case 'F':
		cout<<"Alat F";
		default:
		cout<<"Salah Input Kode";
		break;
	}
	getchar();
}
