#include <iostream>

using namespace std;


int n=4, top=-1;

struct paket{
    char jenis_brg[30];
    int berat;
    char kota[30];
};

struct paket kirim[100];

void push(int val);
void pop();
void tampilData();

int main() {
   int pilih, datake=0;
   do {
        cout << "MENU UTAMA" <<endl;
        cout << "1. Tambah Data(push)" << endl;
        cout << "2. Hapus Data(pop)" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "4. Keluar" << endl;

        cout << "Pilihan Adna [1-9]" << endl;
        cin>>pilih;
        if(pilih == 1){
            push(datake);// menambah data baru di posisi DATAKE
            datake++;
        }else if(pilih == 2){
            pop();
//            datake--;
        }else if(pilih == 3){
            tampilData();
//            tampilData(datake);
        }
    }while(pilih!=9);
   return 0;
}

void push(int val) {
   if(top>=n-1)
        cout<<"Stack penuh Bosss!!!"<<endl;
   else {
        top++;
        cout << "Masukan Jenis Barang   : ";
        cin >> kirim[val].jenis_brg;
        cout << "Masukan Berat Barang   : ";
        cin >> kirim[val].berat;
        cout << "Masukan Kota Tujuan    : ";
        cin >> kirim[val].kota;
        cout << endl;

   }
}

void pop() {
   if(top<=-1)
        cout<<"Stack masih kosong boss!!!"<<endl;
   else {
        cout<<"Data terakhir yang akan di hapus adalah \n"<< kirim[top].jenis_brg << " | " << kirim[top].berat << " | " << kirim[top].kota << endl;
        top--;
   }
}

void tampilData() {
   if(top>=0) {
        for(int a=0; a<=top; a++){
            cout << a+1 << ". " << kirim[a].jenis_brg << " | " << kirim[a].berat << " | " << kirim[a].kota << endl;
        }
   } else
        cout<<"Stack kosong boss!!!";
}
