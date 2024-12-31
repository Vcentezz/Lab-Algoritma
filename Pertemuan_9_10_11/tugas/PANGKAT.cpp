#include<iostream>
using namespace std;

int pangkat(int x, int y){
	if(y==0){
		return 1;
	}
	else{
		return x * pangkat(x,y-1);
	}
	return x;
	return y;
}
int main(){
	int x;
	int y;
	cout<< "nilai x= ";cin>>x;
	cout<< "nilai y= ";cin>>y;
	cout<< "4 dipangkatkan 3 = "<<pangkat(x,y);
	
}

