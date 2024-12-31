#include <iostream>
using namespace std;

int main() {

  int a, bilangan_yang_ditanyakan;
  bool prima = true;

  cout << "Masukan Angka: ";
  cin >> bilangan_yang_ditanyakan;

  
  if (bilangan_yang_ditanyakan == 0 || bilangan_yang_ditanyakan == 1) {
    prima = false;
  }

  
  for (a = 2; a <= bilangan_yang_ditanyakan/2; ++a) {
    if (bilangan_yang_ditanyakan % a == 0) {
      prima = false;	
	}
  
  }

cout<<"========================================================================================================================\n";
  
  if (prima)
   cout << bilangan_yang_ditanyakan << " TERMASUK BILANGAN PRIMA";
 else
    cout << bilangan_yang_ditanyakan << " BUKAN TERMASUK BILANGAN PRIMA";

  return 0;
}

