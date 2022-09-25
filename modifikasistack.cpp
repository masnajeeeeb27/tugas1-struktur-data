#include <iostream>
#define MAX 15
using namespace std;


struct paket{
    string nama_paket;
    int berat;
    string kota;

    bool penuh();
    bool kosong();
    void inputkan();
    void hapus();
    void tampil();
};

paket stack[MAX];

int atas = 0;

bool paket::penuh(){
    if(atas == MAX){
        return true;
    }else{
        return false;
    }
}

bool paket::kosong(){
    if(atas == 0){
        return true;
    }else{
        return false;
    }
}

void paket::inputkan(){
    if(penuh()){
        cout << "Truk Penuh" << endl;
    }else{
        cout << "Nama Paket : ";
        cin >> stack[atas].nama_paket;
        cout << "Berat Paket : ";
        cin >> stack[atas].berat;
        cout << "Kota Tujuan : ";
        cin >> stack[atas].kota;

        atas++;
    }
}

void paket::hapus(){
    if(kosong()){
        cout << "Truk Kosong" << endl;
    }else{
        atas--;
    }
}

void paket::tampil(){
    if(kosong()){
        cout << "Truk Kosong" << endl;
    }
    else{
        cout << endl;
        for(int i = 0 ; i < atas ; i++){
            cout << i+1 << ". " << stack[i].nama_paket << " " << stack[i].berat << " " << stack[i].kota << endl;
        }
    }
}

int main(){
    int pilih;
    paket data;
    do{
        cout << endl << endl;
        cout << "1. Inputkan Data" << endl;
        cout << "2. Hapus Data" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilih;
        switch(pilih){
            case 1:
                data.inputkan();
                break;
            case 2:
                data.hapus();
                break;
            case 3:
                data.tampil();
                break;
            case 4:
                cout << "Keluar" << endl;
                break;
            default:
                cout << "Pilihan Salah" << endl;
        }
    }while(pilih != 4);
}




