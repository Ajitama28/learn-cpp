#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Masukkan umur anda :" << endl;
    cin >> age;
    if (age <= 25){
        cout << "Belum cukup umur untuk masuk tempat ini" << endl;
    }else {
        cout << "Silahkan Masuk" << endl;
    }
    return 0;
}