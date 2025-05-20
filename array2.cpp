#include <iostream>
using namespace std;

int main(){
    int i;
    int A[2][4] = { //2 itu baris, 4 itu kolom
        {-1,2,3,4},
        {5,6,7,8}
    };

    //mencari elemen terbesar
    int max = 0;
    for (i=0; i < 2; i++){
        for (int j=0; j < 4; j++){
            if (A[i][j] > max){
                max = A[i][j];
            }
        }
    }
    cout << "Elemen terbesar: " << max << endl;

    //mencari elemen terkecil
    int min = 100;
    for (i=0; i < 2; i++){
        for (int j=0; j < 4; j++){
            if (A[i][j] < min){
                min = A[i][j];
            }
        }
    }
    cout << "Elemen terkecil: " << min << endl;
    cout << endl;

    //mecari elemen dalam array
    int cari;
    cout << "Masukkan elemen yang dicari: ";
    cin >> cari;
    bool ketemu = false;
    for (i=0; i < 2; i++){
        for (int j=0; j < 4; j++){
            if (A[i][j] == cari){
                ketemu = true;
                break;
            }
        }
    }

    if (ketemu){
        cout << cari << " ada dalam array" << endl;
    }
    else{
        cout << cari << " tidak ada dalam array" << endl;
    }
    return 0;
}