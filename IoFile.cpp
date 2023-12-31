#include<fstream> //
#include<string>
#include <iostream>
using namespace std;

int main()
{
	string baris;
	//membuka file dalam mode menulis
	ofstream outfile;
	//menunjuk kesebuah nama file;
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;
	//unlimited loop untuk menulis
	while (true) {
		cout << "-";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukan karakter q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis,sekarang tutup file
	outfile.close();
	//membuka file dalam mode membaca
	ifstream infile;
	//menunjuk ke sebuah file
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open()) {
		//melakukan perulangan tiap baris
		while (getline(infile, baris)) {
			//dan tampilkan disini
			cout << baris << '\n';
		}
		//tutup file setelah selesai
		infile.close();
	}
	//jika tidak ditemukan file 
	else cout << "Unable to open file";
	return 0;

}


