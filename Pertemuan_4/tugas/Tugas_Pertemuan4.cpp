#include <iostream>
using namespace std;
int main()
{
	string aaa;
	float a1, a2, a3, a4;
	
	cout <<"Nama Siswa: ";
	cin >> aaa;
	
	cout <<"Nilai Pertandingan I  : ";
	cin >>a1;
	
	cout <<"Nilai Pertandingan II : ";
	cin >>a2;
	
	cout <<"Nilai Pertandingan III: ";
	cin >>a3;
	
	a4 = ( a1 + a2 + a3 ) / 3 ;
	cout << "siswa yang bernama " << aaa<<endl;
	cout << "memperoleh nilai rata-rata "<<a4 << " dari hasil perlombaan yang diikutinya"<<endl;
	
	if (a4 >= 85)
	{
		cout << "mendapatkan hadiah komputer Core i5";
	}
	
	else if  (a4 >= 70)
	{
		cout << "mendapatkan hadiah Uang sebesar Rp. 2.500.000";
	}
	
	else
	{
		cout << "mendapatkan hadiah hiburan";
	}	
	 
}
