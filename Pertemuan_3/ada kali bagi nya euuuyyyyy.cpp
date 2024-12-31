#include <iostream>
using namespace std;

int main()
{
	double x, y, tambah, kurang, kali, bagi;
	
	cout << "Masukan bilangan kesatu: ";
	cin >> x;
	cout << "masukan bilangan kedua: ";
	cin >> y;
	
	tambah = x + y;
	kurang = x - y;
	kali = x * y;
	bagi = x / y;
	
	cout << "hasil penjumlahan: " << tambah << endl;
	cout << "hasil pengurangan: " << kurang << endl;
	cout << "hasil perkalian  : " << kali << endl;
	cout << "hasil pembagian  : " << bagi << endl;
	
	return 0;
	
}
