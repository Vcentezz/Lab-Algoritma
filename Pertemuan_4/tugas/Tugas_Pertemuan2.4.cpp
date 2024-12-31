#include <iostream>
using namespace std;
int main ()
{
	int a1, a2, a3, a4;
	string aaa;
	cout <<"Nama Siswa : ";
	cin >> aaa;
	
	cout <<"Nilai Pertandingan I\t: ";
	cin >>a1;
	
	cout <<"Nilai Pertandingan II\t: ";
	cin >>a2;
	
	cout <<"Nilai Pertandingan III\t: ";
	cin >>a3;
	
	a4 = ( a1 + a2 + a3 ) / 3 ;
	cout << "siswa yang bernama " << aaa<<endl;
	cout << "memperoleh nilai rata-rata "<<a4 << " dari hasil perlombaan yang diikutinya"<<endl;
	
	switch ( a4 )
	{
	
	
		case 1 ... 69 :
		cout << "mendapatkan hadiah hiburan";
		break;
		
		case 70 ... 84 :
		cout << "mendapatkan hadiah Uang sebesar Rp. 2.500.000";
		break;
		
		case 85 ... 100:
		cout << "mendapatkan hadiah komputer Core i5";
		break;
	}
}
