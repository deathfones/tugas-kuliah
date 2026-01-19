#include <iostream>
#include <string>
#include <vector>
#include <limits>

using namespace std;

// Struktur Buku
struct Buku {
    string kode;
    string buku;
    string judul;
    string penulis;
    int tahunTerbit;
    int jumlah;
    int harga;
};

vector<Buku> daftarBuku;

//Fungsi agar tidak looping
void pause() {
    cout << "\nTekan Enter untuk kembali...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

//Fungsi rekursif ganjil genap
void hitungGanjilGenap(int n, int current, int &ganjil, int &genap) {
    if (current > n) return;
    if (current % 2 == 0) genap++;
    else ganjil++;
    hitungGanjilGenap(n, current + 1, ganjil, genap);
}
 
//Fungsi Rekursif penjumlahan A+1 sebanyak B kali
int tambahRekursif (int a, int b){
    if ( b == 0) return a;
    return 1 + tambahRekursif(a, b - 1);
}

//Fungsi Manajemen Buku
void inputBuku(){
    Buku b;
    cout << "Masukkan Kode Buku: "; cin >> b.kode;
    if (b.kode == "" || b.kode == " "){
        cout << "Kode Masih Kosong !" << endl;
        pause();
        return;
    }

    for (const auto& item : daftarBuku){
        if (item.kode == b.kode){
            cout << "Kode buku sudah ada!" << endl;
            pause();
            return;
        }
    }
    cout << "Masukkan Judul buku: "; cin.ignore();getline(cin, b.judul);

    if (b.judul == ""){
    cout << "Judul tidak boleh kosong " << endl;
    pause();
    return;
    }

    cout << "Masukkan Penulis: ", getline(cin, b.penulis);
    cout << "Masukkan Tahun Terbit: "; cin >> b.tahunTerbit;
    cout << "Masukkan Jumlah: "; cin >> b.jumlah;
    cout << "Masukkan Harga: "; cin >> b.harga;
    
    daftarBuku.push_back(b);
    cout << "Data Berhasil Disimpan!" << endl;
}

//Fungsi  edit buku
void editBuku(){
    string cari;
    cout << "Masukkan kode buku yang ingini diedit"; cin >> cari;
    for (auto& b : daftarBuku){
        if (b.kode == cari){
            cout << "Input Judul baru :"; cin.ignore(); getline(cin, b.judul);
            cout << "Input Penulis baru :"; getline(cin, b.penulis);
            cout << "Data Berhasil diubah!" << endl;
            pause();
            return;
        }
    }
    cout << "Kode Buku tidak ditemukan !" << endl;
    pause();
}

//Fungsi Hapus Buku
void hapusBuku(){
    string cari;
    cout << "Masukkan  kode buku yang ingin dihapus"; cin >> cari;
    for (int i = 0; i < daftarBuku.size(); i++){
        if (daftarBuku[i].kode == cari){
            daftarBuku.erase(daftarBuku.begin() + i);
            cout << "Data Berhasil dihapus !" << endl;
            pause();
            return;

        }
    }
    cout << "Kode tidak ditemukan !" << endl;
    pause();
}

// Fungsi Laporan Buku
void laporanBuku() {
    cout << "\n--- Laporan Data Buku ---" << endl;
    for (const auto& b : daftarBuku) {
        cout << "Kode: " << b.kode
             << " | Judul: " << b.judul
             << " | Penulis: " << b.penulis
             << " | Total (Jumlah x Harga): " << (b.jumlah * b.harga) << endl;
    }
    pause();
}

int main (){
    int pilihan;
    do {
        //Menu Pilihan
        cout << "\n--- Menu Utama ---" << endl;
        cout << "1. Input Buku" << endl;
        cout << "2. Edit Buku" << endl;
        cout << "3. Hapus Buku" << endl;
        cout << "4. Laporan Buku" << endl;
        cout << " Pilih [1...5]"; cin >> pilihan;

        switch(pilihan){
            case 1 : inputBuku(); break;
            case 2 : editBuku(); break;
            case 3 : hapusBuku(); break;
            case 4 : laporanBuku(); break;
            case 5 : cout << "Keluar dari Manajemen Buku..." << endl; break;
        }
    }while (pilihan !=5);

    //Bagian rekursif ganjil genap
    int n, ganjil = 0, genap = 0;
    cout << "\n--- Tugas Rekursif Ganjil Genap ---" << endl;
    cout << "Masukkan Jumlah urutan data: "; cin >> n;
    hitungGanjilGenap(n, 1, ganjil, genap);
    cout << "Jumlah Bilangan Ganjil : " << ganjil << endl;
    cout << "Jumlah Bilangan Genap  : " << genap << endl;

    //Bagian rekursif penjumlahan
    int a,b;
    cout << "\n--- Tugas Rekursif Penjumlahan A+b ---" << endl;
    cout << "Masukkan Bilangan A: "; cin >> a;
    cout << "Masukkan Bilangan B: "; cin >> b;
    cout << "Hasil Jumlah(A+B) : " << tambahRekursif(a,b) << endl;

    return 0;
}