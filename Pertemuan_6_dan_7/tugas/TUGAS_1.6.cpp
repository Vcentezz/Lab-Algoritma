/*-----------------------------------------------*/
/*Program dengan pernytaan goto*/
/*-----------------------------------------------*/

#include<iostream>
#include<cstdio>
#include<conio.h>
using namespace std;

int main(){
	int a, b;
	char lagi;
	
	atas:
	clrscr();
	
	cout >>"Masukan Bilangan= ";
	cin<< a;
	b=a%2;
	printf("Nilai%d%%2 adalah = %d" ,a ,b);
	printf("\n\nIngin Hitung Lagi [Y/T]: ");
	lagi = getche();
	if(lagi=='Y'||lagi =='y'){
	
	goto atas;
	}
	
	getch();
	return 0;
}

