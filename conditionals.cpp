#include <iostream>
using namespace std;

int main() {
int totDetik;
int harga;
cout << "Masukkan total waktu parkir (detik): ";
cin >> totDetik;
cout << endl;

int jam = totDetik/60/60;
int menit = totDetik/60%60;
int detik = totDetik%60%60;
int biaya;
if (totDetik <= 3600) {
    harga = 1000;
    biaya = harga;
} else {
    harga = 2000;
    int sisaSetelahJamPertama = totDetik - 3600;
    int jamTambahan = sisaSetelahJamPertama / 3600;
    if (sisaSetelahJamPertama % 3600 != 0) {
        jamTambahan += 1;
    }
    biaya = 1000 + jamTambahan * harga;
}

cout << "Total waktu parkir: " << jam << " jam, " << menit << " menit, " << detik << " detik." << endl;
cout << "Total biaya parkir: " << biaya;

return 0;
}