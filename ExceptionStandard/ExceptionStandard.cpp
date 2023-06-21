

#include <iostream>
#include<exception> //untuk objek exception
#include<array> //untuk objek array
using namespace std;

int main()
{
    cout << "Awal Program" << endl;//penanda 1
    try {
        array<int, 3> data = { 3, 5, 7 };
        //pesan array
        cout << data.at(5) << endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        //penangkap menggunakan objek exception
        cout << e.what() << endl;
        //akan dieksekusi karena array data hanya punya 3 elemen
    }
    cout << "Baris Program yang terakhir" << endl;
    //penanda 2: bahwa program berjalan tanpa berhenti meski ada kesalahan
    return 0;
}

