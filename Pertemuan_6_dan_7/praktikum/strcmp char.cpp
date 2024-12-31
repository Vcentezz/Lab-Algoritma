#include <iostream>
#include <string.h>
using namespace std;
int main(){
	char a1[]="IBIK";
	char a2[]="Ibik";
	char b1[]="IBIK";
	
	cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"_>";
	cout<<strcmp(a1,a2)<<endl;
	cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"_>";
	cout<<strcmp(a2,a1)<<endl;
	cout<<"hasil Perbandingan "<<a1<<" dan "<<b1<<"_>";
	cout<<strcmp(a1,b1)<<endl;
	getchar();
}
