#include <iostream>
#include <iostream>
using namespace std;

int luas_persegi_panjang(int panjang, int lebar){
	int luas_P_P;
	luas_P_P= panjang * lebar;
	return luas_P_P;
}

int luas_persegi(int sisi_a){
	int LUAS_PERSEGI;
	LUAS_PERSEGI=sisi_a*sisi_a;
	return  LUAS_PERSEGI;	
}

float tabung(float r, float phi, float t){
	float v_tabung;
	phi= 3.14;
	v_tabung = phi * r * r * t;
	return v_tabung;
	}

float ltabung(float r, float phi, float t){
	float l_tabung;
	phi= 3.14;
	l_tabung= 2 * phi * r * (r+t);
	return l_tabung;
}
int main(){
	int i;
	for(int i=1; i<=2; i++){
		int luas_P_P, panjang, lebar;
		cout<<"==========\tLUAS PERSEGI PANJANG\t=========="<<endl;
		cout<<"Masukan Nilai Panjang= "; cin>>panjang; 
		cout<<"Masukan Nilai Lebar  = "; cin>>lebar; 
	
		luas_P_P =luas_persegi_panjang(panjang, lebar);
		cout<<"Luas Persegi Panjang ="<<luas_P_P<<"cm"<<endl<<endl;
	}
	
	int j;
	for(int j=1; j<=2; j++){
		int LUAS_PERSEGI, sisi_a;
		cout<<"==========\tLUAS PERSEGI\t\t=========="<<endl;
		cout<<"Masukan Nilai Sisi = "; cin>>sisi_a;
		
		LUAS_PERSEGI=luas_persegi(sisi_a);
		cout<<"Luas Persegi       = "<<LUAS_PERSEGI<<"cm"<<endl<<endl;
	}
	
	int k;
	for(int k=1; k<=2; k++){
		float v_tabung, phi, r, t;
		cout<<"==========\tVOLUME TABUNG\t\t=========="<<endl;
		cout<<"Masukan Nilai jari-jari alas tabung= "; cin>>r;
		cout<<"Masukan Nilai tinggi Tabung        = "; cin>>t;
		
		v_tabung= tabung(r, phi, t);
		cout<<"Volume Tabung                      = "<<v_tabung<<" cm^3"<<endl<<endl;
	}
	
	int l;
	for(int l=1; l<=2; l++){
		float l_tabung, phi, r, t;
		cout<<"==========\tLUAS TABUNG\t\t=========="<<endl;
		cout<<"Masukan Nilai jari-jari alas tabung= "; cin>>r;
		cout<<"Masukan Nilai tinggi Tabung        = "; cin>>t;
		
		l_tabung=ltabung(r, phi, t);
		cout<<"Luas Tabung                        = "<<l_tabung<<"cm^2"<<endl<<endl;
	}
}

