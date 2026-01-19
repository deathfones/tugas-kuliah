#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main () {

    cout << " PROGRAM PENYEWAAN / RENTAL MOBIL" << endl;
    cout << "==================================" << endl;

    string namaPembeli, langganan, namaMobil, jenisMobil, satuan, bonus;
    int jmlMobilDisewa, tahunProduksi, lamaSewa;

    double hargaSewa = 0;
    double totalHargaSewa = 0;
    double totalAfterDiskon = 0;
    double diskon = 0;
    double diskonTambahan = 0;
    double totalAkhir = 0;
    double totalPajak = 0;
    double totalHargaSewaMobil = 0;

    double diskonLangganan = 0.10;
    double diskon2unit10hari = 0.10;
    double pajak = 0.10;

    // Input Data Pelanggan
    cout << "Jumlah Mobil diSewa : ";
    cin >> jmlMobilDisewa;

    cin.ignore();
    cout << "Nama Pembeli : ";
    getline(cin,namaPembeli);

    cout << "Apakah Pembeli Langganan : ";
    cin >> langganan;

    cin.ignore();
    cout << "------------------------------" << endl;

    //Perulangan
    for (int i = 1; i <= jmlMobilDisewa; i++){

        cout << "Mobil ke- " << i << endl;

        cout << "Nama Mobil : ";
        getline(cin, namaMobil);

        if (namaMobil == "Avanza" || namaMobil == "Xenia" || namaMobil == "Mobilio"){
            jenisMobil = "MPV";
        }
        else if (namaMobil == "Altis" || namaMobil == "Civic" || namaMobil == "BMW"){
            jenisMobil = "Sedan";
        }
        cout << "Jenis Mobil : " << jenisMobil << endl;

        cout << "Tahun Produksi : ";
        cin >> tahunProduksi;

        cin.ignore();
        cout << "Satuan : ";
        getline (cin, satuan);

        cout << "Harga Sewa/Hari : ";
        cin >> hargaSewa;

        cout << "Lama Sewa : ";
        cin >> lamaSewa;

        cin.ignore();

        cout << fixed << setprecision(2);

        //Perhitungan Harga
        totalHargaSewa = hargaSewa * lamaSewa;
        cout << "Total Harga Sewa : " << totalHargaSewa << endl;

        diskon = 0;
        diskonTambahan = 0;

        if (langganan == "Y"){
            diskon = totalHargaSewa * diskonLangganan;
            cout << "Diskon 10% : " << diskon << endl;
        }

        if (jmlMobilDisewa > 2 && lamaSewa > 10){
            diskonTambahan = totalHargaSewa * diskon2unit10hari;
            cout << "Diskon Tambahan (>2 Unit & >10 Hari) : " << diskonTambahan << endl;
        }

        totalAfterDiskon = totalHargaSewa - diskon - diskon2unit10hari;
        cout << "Total Setelah Diskon : " << totalAfterDiskon << endl;

        cout << "---------------------------------" << endl;

        totalHargaSewaMobil += totalAfterDiskon;

    }
    
    //Cetak Struk
    cout << endl << "==========================================" << endl;
    cout << "Nama Peminjam : " << namaPembeli << endl;
    cout << "Langganan     : " << langganan << endl;
    cout << "Jumlah Mobil  : " << jmlMobilDisewa << endl;
    cout << "Sewa Mobil    : " << totalHargaSewaMobil << endl;

    totalPajak = totalHargaSewaMobil * pajak;
    totalAkhir = totalHargaSewaMobil + totalPajak;

    cout << "Pajak 10%     : " << totalPajak << endl;
    cout << "Total Akhir   : " << totalAkhir << endl;

    bonus = (totalAkhir > 2500000) ? "Sarung Cover Mobil" : "Tissue Kabin";
    cout << "Bonus         : " << bonus << endl;

    cout << "=============================================" << endl;

}