#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	
	cout << "Ukuran : ";
	cin >> n;
	
	for(i=0;i<=n;i++){
		for(j=-n;j<=n;j++){
			if(-i<j&&j<i){
				cout <<"  ";
			}
			else{
				cout<<"* ";
			}	
		}
	cout<<"\n";
	}
	for(i=0; i<=n; i++){
		for(j=-n; j<=n; j++){
			if(-(n-i)<j&&j<(n-i)){
			cout <<"  ";
			}
			else{
			cout <<"* ";
			}
		}
	cout <<"\n";
	}

}
