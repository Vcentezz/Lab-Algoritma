#include <iostream>
using namespace std;

int main (){
	double total_beli, ptgn=0, jml_bayar=0;
	
	cout<<"Total Pembelian Rp";
	cin>>total_beli;
	if(total_beli=50000) {
		ptgn = 0.2*total_beli;
		cout<<"Besar Potongan Rp"<<ptgn<<endl;
	}
	jml_bayar=total_beli-ptgn;
	cout<<"Jumlah yg harus dibayar Rp"<<jml_bayar;
	getchar();
}
