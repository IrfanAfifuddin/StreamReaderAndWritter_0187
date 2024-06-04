#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di prodi TI UMY" << endl;
		// throw 0.5; // melemparkan sebuah interger maka
		cout << "Pernyataan tidak di eksekusi" << endl;
	}

	catch (int a) {
		// blok ini akan di eksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}

	catch (...) {
		// *jika selain integer maka blok ini akan di eksekusi
		cout << "default pengecualian dieksekusi" << endl;
	}

	return 0;
}