#include <iostream>
using namespace std;

int main() {
    double num1;
    double num2;
    int cal;
    double summary;
    cout << "INI ADALAH KALKULATOR SEDERHANA" << endl;
    cout << "===============================" << endl;
    cout << "Masukan angka pertama" << endl;
    cin >> num1;
    cout << "Masukkan angka kedua" << endl;
    cin >> num2;
    cout << "==============================" << endl;
    cout << "Pilih ingin melakukan operasi apa??" << endl;
    cout << "Pilih 1 untuk Penjumlahan" << endl;
    cout << "Pilih 2 untuk Pengurangan" << endl;
    cout << "Pilih 3 untuk Perkalian" << endl;
    cout << "Pilih 4 untuk Pembagian" << endl;
    cin >> cal;
    if (cal == 1){
        cout << "Penjumalahan dari " << num1 << "dengan" << num2 << "adalah" << endl;
        summary = num1 + num2;
        cout << summary;
    }else if (cal == 2){
        cout << "Pengurangan dari " << num1 << "dengan" << num2 << "adalah" << endl;
        summary = num1 - num2;
        cout << summary;
    }else if (cal == 3){
        cout << "Perkalian dari " << num1 << "dengan" << num2 << "adalah" << endl;
        summary = num1 * num2;
        cout << summary;
    }else if (cal == 4){
        if (num2 == 0){
            cout << "Tidak bisa membagi dengan 0 " << endl;
        }else{
            cout << "Pembagian dari " << num1 << "dengan" << num2 << "adalah" << endl;
            summary = num1 / num2;
            cout << summary;
        }
    }else {
        cout << "Pilihan Tidak tersedia";
    }
    return 0;
}