#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Sparepart {
    string namaBarang;
    string satuan;
    int jumlah;
    double harga;
    double totalharga;
};

const int MAX_BARANG = 100;
Sparepart gudang[MAX_BARANG];
int jumlahData = 0;

void tambahData();
void tampilkanLaporan();
void editData();
void hapusData();
int cariBarang(string nama);
void hitungTotal(int index);

int main (){
    int pilihan;
    do {
        cout << "\n=== APLIKASI OTO MOTOR ===\n";
        cout << "1. Tambah Data Sparepart\n";
        cout << "2. Laporan Pendataan Barang\n";
        cout << "3. Edit Data\n";
        cout << "4. Hapus Data\n";
        cout << "5. Keluar\n";
        cout << "Pilih Menu\n";
        cin >> pilihan;
        cin.ignore();

        switch (pilihan) {
            case 1: tambahData(); break;
            case 2: tampilkanLaporan(); break;
            case 3: editData(); break;
            case 4: hapusData(); break;
            case 5: cout << "Keluar program.\n"; break;
            default: cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}

void hitungTotal(int index) {
    gudang[index]. totalharga = gudang[index].harga * gudang[index].jumlah;
}
void tambahData() {
    int n;
    cout << " Berapa Data yang diinput (minimal 3): ";
    cin >> n;
    cin.ignore();

    if (jumlahData + n > MAX_BARANG) {
        cout << "Gudang Penuh!\n";
        return;
    }

    for (int i = 0; 1 < n; i++){
        cout << "\nData ke-" << (jumlahData + 1) << endl;

        cout << "Nama Barang : "; getline(cin,gudang[jumlahData].namaBarang);
        cout << "Satuan      : "; getline(cin,gudang[jumlahData].satuan);
        cout << "Jumlah      : "; cin >> gudang[jumlahData].jumlah;
        cout << "Harga       : "; cin >> gudang[jumlahData].harga;
        cin.ignore();

        hitungTotal(jumlahData);

        jumlahData++;
    }
    cout << "\nData Berhasil disimpan!\n";
}

void tampilkanLaporan() {
    cout << "\n========== Laporan Stok OTO Motor ==========";
    cout << left << setw(5) << "No"
         << setw(20) << "Nama Barang"
         << setw(10) << "Satuan"
         << setw(10) << "jumlah"
         << setw(15) << "Harga"
         << setw(15) << "Total Aset" << endl;
    cout << "---------------------------------------------------";

    double totalAsetGudang = 0;

    for (int i = 0; i < jumlahData; i++) {
        cout << left << setw(5) << (i + 1)
         << setw(20) << gudang[i].namaBarang
         << setw(10) << gudang[i].satuan
         << setw(10) << gudang[i].jumlah
         << "Rp " << setw(12) << (size_t)gudang[i].harga
         << "Rp " << setw(12) << (size_t)gudang[i].totalharga << endl;

        totalAsetGudang =+ gudang[i].totalharga;
    }
    cout << "------------------------------------------------------";
    cout << "Total nilai aset gudang: Rp " << (size_t)totalAsetGudang << endl;
    
}
 int cariBarang(string nama) {
    for (int i = 0; i < jumlahData; i++) {
        if (gudang[i].namaBarang == nama){
            return i;
        }
    }
    return -1;
 }

 void editData() {
    string nama; 
    cout << "Masukkan nama barang yang akan diedit: ";
    getline(cin, nama);

    int index = cariBarang(nama);

    if (index != -1){
        cout << "Data ditemukan. Masukkan data baru\n";
        cout << "Nama Baru: "; getline(cin, gudang[index].namaBarang);
        cout << "Satuan Baru: "; getline(cin, gudang[index].satuan);
        cout << "Jumlah Baru: "; cin >> gudang[index].jumlah;
        cout << "Harga Baru: "; cin >> gudang[index].harga;
        cin.ignore();

        hitungTotal(index);
        cout << "Update Sukes\n";
    } else {
        cout << "Validasi gagal. Barang tidak ditemukan\n";
    }
 }

void hapusData(){
    string nama;
    cout << "Masukkan barang yang akan dihapus: ";
    getline(cin, nama);

    int index = cariBarang(nama);

    if (index != -1) {
        for (int i = index; i < jumlahData - 1; i++) {
            gudang[i] = gudang[i + 1];
        }
        jumlahData--;
        cout << "Data berhasil dihapus!\n";
    } else {
        cout << "Validasi gagal: Barang tidak ditemukan!\n";
    }
}
 