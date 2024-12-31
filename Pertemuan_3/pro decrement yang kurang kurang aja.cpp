#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = a--;
	
	cout << "post-decrement: " << endl;
	cout << "nilai a setelah a--: " << a << endl;
	cout << "nilai b: " << b << endl;
	
	int c = 5;
	int d = --c;
	
	cout << "\npre decrement: " << endl;
	cout << "nilai c setelah  --c: " << c << endl;
	cout << "nilai d: " << d << endl;
	
	return 0;
}
