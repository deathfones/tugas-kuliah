#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    cout << "PROGRAM PENYEWAAN / RENTAL MOBIL" << endl;
    cout << "================================" << endl;

    string namaPembeli, langganan, namaMobil, jenisMobil, satuan, bonus;
    int jmlMobilDiSewa, tahunProduksi, lamaSewa;

    double hargaSewa = 0;
    double totalHargaSewa = 0;
    double totalAfterDiskon = 0;
    double diskon = 0;
    double diskonTambahan = 0;
    double totalAkhir = 0;
    double totalPajak = 0;
    double totalHargaMobilSewa = 0;

    double diskonLangganan = 0.10;
    double diskon2unit10hari = 0.10;
    double pajak = 0.10;

    // Input data pelanggan
    cout << "Jumlah Mobil yang disewa: ";
    cin >> jmlMobilDiSewa;

    cin.ignore();
    cout << "Nama Pembeli: ";
    getline(cin, namaPembeli);

    cout << "Apakah Pembeli Langganan [Y/T]: ";
    cin >> langganan;

    cin.ignore();
    cout << "--------------------------------" << endl;

    // Perulangan per mobil
    for (int i = 1; i <= jmlMobilDiSewa; i++) {

        cout << "Mobil ke-" << i << endl;

        cout << "Nama Mobil: ";
        getline(cin, namaMobil);

        if (namaMobil == "Avanza" || namaMobil == "Xenia" || namaMobil == "Mobilio") {
            jenisMobil = "MPV";
        } 
        else if (namaMobil == "City" || namaMobil == "Civic" || namaMobil == "BMW") {
            jenisMobil = "Sedan";
        }
        else {
            jenisMobil = "Lainnya";
        }

        cout << "Jenis Mobil: " << jenisMobil << endl;

        cout << "Tahun Produksi: ";
        cin >> tahunProduksi;

        cin.ignore();
        cout << "Satuan: ";
        getline(cin, satuan);

        cout << "Harga Sewa/Hari: ";
        cin >> hargaSewa;

        cout << "Lama Sewa: ";
        cin >> lamaSewa;

        cin.ignore();

        cout << fixed << setprecision(2);

        // Hitung harga sewa
        totalHargaSewa = hargaSewa * lamaSewa;
        cout << "Total Jual: " << totalHargaSewa << endl;

        diskon = 0;
        diskonTambahan = 0;

        if (langganan == "Y" || langganan == "y") {
            diskon = totalHargaSewa * diskonLangganan;
            cout << "Diskon 10%: " << diskon << endl;
        }

        if (jmlMobilDiSewa > 2 && lamaSewa > 10) {
            diskonTambahan = totalHargaSewa * diskon2unit10hari;
            cout << "Diskon Tambahan (>2 Unit & >10 Hari) 10%: " << diskonTambahan << endl;
        }

        totalAfterDiskon = totalHargaSewa - diskon - diskonTambahan;
        cout << "Total Setelah Diskon: " << totalAfterDiskon << endl;

        cout << "--------------------------------" << endl;

        totalHargaMobilSewa += totalAfterDiskon;
    }

    // Cetak Struk Akhir
    cout << endl << "========== STRUK PEMBAYARAN ==========" << endl;
    cout << "Nama Pembeli       : " << namaPembeli << endl;
    cout << "Langganan          : " << langganan << endl;
    cout << "Jumlah Mobil       : " << jmlMobilDiSewa << endl;
    cout << "Total Harga Mobil  : " << totalHargaMobilSewa << endl;

    totalPajak = totalHargaMobilSewa * pajak;
    totalAkhir = totalHargaMobilSewa + totalPajak;

    cout << "Pajak 10%          : " << totalPajak << endl;
    cout << "Total Akhir        : " << totalAkhir << endl;

    bonus = (totalAkhir > 2500000) ? "Sarung Cover Mobil" : "Tissue Kabin";
    cout << "Bonus              : " << bonus << endl;

    cout << "=======================================" << endl;

    return 0;
}
