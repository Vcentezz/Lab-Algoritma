#include <iostream>
#define phi 3.14
using namespace std;

int main()
{
	cout << "TUGAS PERTEMUAN 3"<< endl;
	cout << "MARTIN CAESAR PARTOGI"<< endl;
	cout << "NPM 242310034"<<endl;
	cout << "TI-24-PA2"<<endl;
	cout << "TEKNOLOGI INFORMASI"<<endl;
	cout << "========================================================================================================================"<<endl<<endl;
	
	
	cout << "VOLUME TABUNG"<<endl;
	
	float a1, a2, b;
	
	
	cout <<"\nDIKETAHUI"<<endl;
	cout <<"phi                              : " << phi <<endl;
	cout <<"jari-jari lingkaran (alas tabung): ";
	cin >>a1;
	cout <<"tinggi tabung                    : ";
	cin >>a2;
	cout <<endl;
	
	
	cout <<"PENGERJAAN"<<endl;
	cout << "volume tabung = alas tabung x tinggi tabung atau phi x jari-jari x jari-jari x tinggi tabung" << endl;
	cout << "volume tabung = "<<phi << " x " << a1 << " x " << a1 << " x " <<a2<< endl;
	b = phi*a1*a1*a2;
	cout << "volume tabung = "<<b<<endl;
	cout << "========================================================================================================================"<<endl<<endl;
	
	
	
	cout << "LUAS LINGKARAN" << endl;
	
	float a, b2;
	cout <<"\nDIKETAHUI"<<endl;
	cout <<"phi       : "<< phi <<endl;
	cout <<"jari-jari : ";
	cin >>a;
	
	b2 = phi * a * a;
	cout <<"PENGERJAAN"<<endl;
	cout <<"luas lingkaran = phi x jari-jari x jari-jari"<<endl;
	cout <<"luas lingkaran = "<< phi << " x " << a << " x " << a<<endl;
	cout <<"luas lingkaran = "<< b2;
	cout << "\n========================================================================================================================";
	return 0;
}
