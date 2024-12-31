 #include <iostream>
#include <string>
using namespace std;

int main()
{
	string x, y, z;
	
	cout << "Masukan NPM Anda :";
	cin >> x;
	cin.ignore();
	cout << "Masukan Nama Anda :";
	getline(cin, y);
	cout << "Masukan Alamat Anda : ";
	getline(cin, z);
	
	cout << "npm anda adalah : " << x << endl;
	cout << "nama anda adalah : " << y << endl;
	cout << "alamat anda adalah : " << z;
	
	return 0; 
}
