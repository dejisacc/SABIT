#include <iostream>
using namespace std;

int main() {
int pilihan;

do {
    cout << "\\n=== MENU PARKIR ===\\n";
    cout << "1. Motor\\n";
    cout << "2. Mobil\\n";
    cout << "3. Keluar\\n";
    cout << "Pilihan Anda: ";
    cin >> pilihan;

    if (pilihan == 1 || pilihan == 2) {
        int totDetik;
        int hargaJamPertama = 1000;
        int hargaJamBerikutnya = (pilihan == 1) ? 2000 : 3000;

        cout << "Masukkan total waktu parkir (dalam detik): ";
        cin >> totDetik;

        int jam = totDetik / 3600;
        int menit = (totDetik % 3600) / 60;
        int detik = totDetik % 60;

        int biaya;
        if (totDetik <= 3600) {
            biaya = hargaJamPertama;
        } else {
            int sisaSetelahJamPertama = totDetik - 3600;
            int jamTambahan = sisaSetelahJamPertama / 3600;
            if (sisaSetelahJamPertama % 3600 != 0) {
                jamTambahan += 1;
            }
            biaya = hargaJamPertama + (jamTambahan * hargaJamBerikutnya);
        }

        cout << "\\nTotal waktu parkir: " << jam << " jam, " << menit << " menit, " << detik << " detik." << endl;
        cout << "Total biaya parkir: Rp " << biaya << endl;
    }
    else if (pilihan == 3) {
        cout << "Terima kasih. Program selesai.\\n";
    }
    else {
        cout << "Pilihan tidak valid. Silakan coba lagi.\\n";
    }

} while (pilihan != 3);

return 0;
}
