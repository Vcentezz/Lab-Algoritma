#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	int a, a1=20, b;
	
	for(a=2 ; a<=a1; a+=2){
		cout<<a;
		if(a<a1){
			cout<<" + ";
		}
	}
	cout <<" = ";
	b=(a1+1)/2;
	b=b*b;
	cout<<b ;
	return 0;

}