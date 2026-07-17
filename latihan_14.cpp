#include <iostream>
using namespace std;

int main() {
    int master = 50;
    int music = 50;
    int game = 50;
    int discord = 50;
    int mic = 50;
    int masterMute = 1;
    int musicMute = 1;
    int gameMute = 1;
    int discordMute = 1;
    int micMute = 1;
    int pilih;

    do{
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

        if(pilih == 1){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> master;
            while (master < 0 || master > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> master;
            }
            cout << "Mute : ";
        }else if(pilih == 2){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> music;
            while (music < 0 || music > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> music;
            }
        }else if(pilih == 3){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> game;
            while (game < 0 || game > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> game;
            }

        }else if(pilih == 4){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> discord;
            while (discord < 0 || discord > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> discord;
            }
        }else if(pilih == 5){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> mic;
            while (mic < 0 || mic > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> mic;
            }
        }else if(pilih == 7){
            cout << "Master : " << master << endl;
            cout << "Music : " << music << endl;
            cout << "Game : " << game << endl;
            cout << "Discord : " << discord<< endl;
            cout << "Microphone : " << mic << endl;
        }

    } while ((pilih >= 1 && pilih <= 7) && pilih != 6);

    cout << "Have A Nice Days :V";

    return 0;
}