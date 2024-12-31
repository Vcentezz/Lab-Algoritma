#include <iostream> //#include iostream mendeklarasikan objek yang mengontrol pembacaan dari dan penulisan ke stream standar.
using namespace std; //membuat kode Anda lebih mudah ditulis.

int main() //mendefinisikan entri atau titik awal kode program C/C++ . Di sini int adalah kata kunci yang memberi tahu kita tentang tipe data integer.
{
	int x=50; //menyimpan bilangan bulat (bilangan bulat), tanpa desimal. deklarasi tipe data
	
	int a, b, c, d, e; //menyimpan bilangan bulat (bilangan bulat), tanpa desimal. deklarasi tipe data
	
	a = x > 5 + 5; // apakah x lebih besar dari 5+5
	b = x > 100; //apakah x lebih besar dari 100
	c = a && b; //menyatakan operator AND akan menghasilkan true jika a dan b true, selain itu hasilnya false
	d = a || b;//menyatakan operator OR akan menghasilkan true jika a dan b true, selain itu hasilnya false
	e = ! (c);// operator NOT akan membalikan fakta dari hasil jawaban deklarasi c
	
	cout << "\nNilai a = x > 5 + 5= "<< a << endl; //jawaban adalah 1 ya itu benar karena 50 lebih besar dari 5+5
	cout << "\nNilai b = x > 100= "<< b << endl; //jawaban adalah 0 ya itu salah karena 50 lebih kecil dari 100
	cout << "\nNilai c = x a && b= "<< c << endl; //jawaban bisa salah atau 0 karena a benar tapi dalam b salah sedangan dalam and atau && kalau salah satu ada yang salah maka hasil 0 atau salah
	cout << "\nNilai d = x a || b= "<< d << endl; //jawaban benar atau 1 karena  a benar walaupun b salah karena dalam or atau || jika salah satu benar maka jawaban benar
	cout << "\nNilai e = x ! (c) = "<< e << endl; //jawaban benar atau 1 karena tanda seru atau ! digunakan sebagai operator logika untuk membalikkan nilai kebenaran suatu kondisi dimana c salah maka jadi benar atau 1
	
	getchar(); //membaca data bertipe karakter
	
	
}
