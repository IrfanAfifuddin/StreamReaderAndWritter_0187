#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // untuk menyimpan data berbentuk string
    string baris;
    // membuka file dalam metode menulis
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, \'q\' untuk keluar" << endl;

    // unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }

    // membuka file dalam mode membaca
    ifstream infile;
 
}