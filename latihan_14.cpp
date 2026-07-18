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
            cout << "Mute : (1 = off; 0 = on)" << endl;
            cin >> masterMute;
            while (masterMute < 0 || masterMute > 1){
                cout << "Masukkan ulang Mute : (1 = off; 0 = on)" << endl;
                cin >> masterMute;
            }
        }else if(pilih == 2){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> music;
            while (music < 0 || music > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> music;
            }
            cout << "Mute : (1 = off; 0 = on)" << endl;
            cin >> musicMute;
            while (musicMute < 0 || musicMute > 1){
                cout << "Masukkan ulang Mute : (1 = off; 0 = on)" << endl;
                cin >> musicMute;
            }
        }else if(pilih == 3){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> game;
            while (game < 0 || game > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> game;
            }
            cout << "Mute : (1 = off; 0 = on)" << endl;
            cin >> gameMute;
            while (gameMute < 0 || gameMute > 1){
                cout << "Masukkan ulang Mute : (1 = off; 0 = on)" << endl;
                cin >> gameMute;
            }
        }else if(pilih == 4){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> discord;
            while (discord < 0 || discord > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> discord;
            }
            cout << "Mute : (1 = off; 0 = on)" << endl;
            cin >> discordMute;
            while (discordMute < 0 || discordMute > 1){
                cout << "Masukkan ulang Mute : (1 = off; 0 = on)" << endl;
                cin >> discordMute;
            }
        }else if(pilih == 5){
            cout << "Masukkan volume (0-100)" << endl;
            cin >> mic;
            while (mic < 0 || mic > 100){
                cout << "Masukkan ulang volume (0-100)" << endl;
                cin >> mic;
            }
            cout << "Mute : (1 = off; 0 = on)" << endl;
            cin >> micMute;
            while (micMute < 0 || micMute > 1){
                cout << "Masukkan ulang Mute : (1 = off; 0 = on)" << endl;
                cin >> micMute;
            }
        }else if(pilih == 7){
            cout << "Master : " << master << endl;
            if (masterMute == 1){
                cout << "Mute : off" << endl;
            }else{
                cout << "Mute : on" << endl;
            }
            cout << "Music : " << music << endl;
            if (musicMute == 1){
                cout << "Mute : off" << endl;
            }else{
                cout << "Mute : on" << endl;
            }
            cout << "Game : " << game << endl;
            if (gameMute == 1){
                cout << "Mute : off" << endl;
            }else{
                cout << "Mute : on" << endl;
            }
            cout << "Discord : " << discord<< endl;
            if (discordMute == 1){
                cout << "Mute : off" << endl;
            }else{
                cout << "Mute : on" << endl;
            }
            cout << "Microphone : " << mic << endl;
            if (micMute == 1){
                cout << "Mute : off" << endl;
            }else{
                cout << "Mute : on" << endl;
            }
            
        }

    } while ((pilih >= 1 && pilih <= 7) && pilih != 6);

    cout << "Have A Nice Days :V";

    return 0;
}