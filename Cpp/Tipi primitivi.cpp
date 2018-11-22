#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main(){
	int w = 20;
	cout << setw(w) << "TIPO"
		 << setw(w) << "BYTES"
		 << setw(w) << "MIN"
		 << setw(w) << "MAX" << endl;
	cout << setw(w) << "int"
		 << setw(w) << sizeof(int)
		 << setw(w) << numeric_limits<int>::min()
		 << setw(w) << numeric_limits<int>::max() << endl;
	cout << setw(w) << "char"
		 << setw(w) << sizeof(char)
		 << setw(w) << (int) numeric_limits<char>::min()
		 << setw(w) << (int) numeric_limits<char>::max() << endl;
	cout << setw(w) << "float"
		 << setw(w) << sizeof(float)
		 << setw(w) << numeric_limits<float>::min()
		 << setw(w) << numeric_limits<float>::max() << endl;
	cout << setw(w) << "double"
		 << setw(w) << sizeof(double)
		 << setw(w) << numeric_limits<double>::min()
		 << setw(w) << numeric_limits<double>::max() << endl;
	cout << setw(w) << "bool"
		 << setw(w) << sizeof(bool)
		 << setw(w) << numeric_limits<bool>::min()
         << setw(w) << numeric_limits<bool>::max() << endl;
	cout << setw(w) << "long int"
		 << setw(w) << sizeof(long int)
		 << setw(w) << numeric_limits<long int>::min()
             << setw(w) << numeric_limits<long int>::max() << endl;
	cout << setw(w) << "short int"
		 << setw(w) << sizeof(short int)
		 << setw(w) << numeric_limits<short int>::min()
             << setw(w) << numeric_limits<short int>::max() << endl;
	cout << setw(w) << "unsigned int"
		 << setw(w) << sizeof(unsigned int)
		 << setw(w) << numeric_limits<unsigned int>::min()
             << setw(w) << numeric_limits<unsigned int>::max() << endl;
	cout << setw(w) << "unsigned char"
		 << setw(w) << sizeof(unsigned char)
		 << setw(w) << numeric_limits<unsigned char>::min()
             << setw(w) << numeric_limits<unsigned char>::max() << endl;
	return 0;
}