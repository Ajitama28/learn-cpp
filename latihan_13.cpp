#include <iostream>
using namespace std;

int main() {
    int master = 50;
    int music = 50;
    int game = 50;
    int discord = 50;
    int mic = 50;
    int pilih;

    do {
        cout << "====== Audio  Mixer ======" << endl;
        cout << "1. Master Volume" << endl;
        cout << "2. Music Volume" << endl;
        cout << "3. Game Volume" << endl;
        cout << "4. Discord Volume" << endl;
        cout << "5. Microphone" << endl;
        cout << "6. Exit" << endl;
        cout << "7. Lihat Status" << endl;
        cout << "Pilih Menu : \n"; 
        cin >> pilih;
        if (pilih < 1 || pilih > 7){
            cout << "Pilih menu angka 1 - 7 saja !!!" << endl;
        }else if(pilih == 1){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> master;
        }else if(pilih == 2){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> music;
        }else if(pilih == 3){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> game;
        }else if(pilih == 4){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> discord;
        }else if(pilih == 5){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> mic;
        }else if(pilih == 7){
            cout << "Master : " << master << endl;
            cout << "Music : " << music << endl;
            cout << "Game : " << game << endl;
            cout << "Discord : " << discord<< endl;
            cout << "Microphone : " << mic << endl;
        }

    } while (pilih  != 6 );
    
    cout << "HAVE A NICE DAY :V";
    
    return 0;
}