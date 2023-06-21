
#include <iostream>
using namespace std;


int main()
{
    try {
        cout << "Selamat Belajar di Prodi TI UMT" << endl; //menampilkan yang akan dieksekusi
        throw 0.5; //melemparkan sebuat integer
        cout << "Pernyataan tidak akan dieksekusi " << endl;
    }
    catch (int a) {
        //blok ini akan diseksekusi jika memasukan int
        cout << "Pengecualian akan dieksekusi" << endl;
    }
    catch (...) {
        //jika selain integer makan akan menampilkan
        cout << "Default Pengecualian dieksekusi" << endl;
    }
    return 0;
}

