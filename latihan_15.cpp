#include <iostream>
using namespace std;

void garis(int jumlahGaris);
void judul();

int main(){
    garis(5);
    judul();
    garis(5);

    return 0;
} 

void garis (int jumlahGaris){
    for (int i = 0; i < jumlahGaris; i++)
    {
        cout << "=";
    }
    cout << endl;
}

void judul(){
    cout << "MENU" << endl;
}