 #include <iostream>
using namespace std;
int main()
{
	float aa, ab, ac, ad;
	
	string aaa;
	
	cout << "Nama Siswa\t\t: ";
	cin >> aaa;
	
	cout << "Nilai Pertandingan I\t: ";
	cin >> aa;
	
	cout << "Nilai Pertandingan II\t: ";
	cin >> ab;
	
	cout << "Nilai Pertandingan III\t: ";
	cin >> ac;
	
	ad = (aa + ab + ac) / 3;
	
	cout << "siswa bernama " << aaa << endl ;
	cout << "memperoleh nilai rata-rata " << ad << " dari hasil lomba yang diikutinya\n";
	
	if ( ad >= 85)
	{
		cout << "Mendapatkan computer Core i5";
	} 
	
	else
	{
		if( ad >= 70)
		{
		cout << "Mendapatkan hadiah uang sebesar Rp. 2.500.000";
		}
		
		else
		{
		cout << "Mendapatkan hadiah hiburan";
		}
	}
	
	getchar();
	return 0;
}
