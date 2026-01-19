#include <iostream>

using namespace std;
int main (){
    string jns_kend;
    int jamParkir=0;
    int biayaPerjam=0;
    int biayaNginap=0;
    int total;
    cout<<"Masukkan Jenis Kendaraan: ";
    cin>>jns_kend;
    cout<<"Lama Parkir: ";
    cin>>jamParkir;
    if ((jns_kend=="Motor") || (jns_kend=="Sepeda"))
    {
        biayaPerjam=3000;
        if (jamParkir<=12) 
        {
            total= jamParkir*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;

        }else
        {
            biayaNginap=50000;
            total=biayaNginap+(jamParkir-12)*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;
        }
    }else if (jns_kend=="Mobil")
    {
        biayaPerjam=5000;
        if (jamParkir<=12) 
        {
            total= jamParkir*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;

        }else
        {
            biayaNginap=75000;
            total=biayaNginap+(jamParkir-12)*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;
         }
    }
    else
    {
        biayaPerjam=25000;
        if (jamParkir<=8) 
        {
            total= jamParkir*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;

        }else
        {
            biayaNginap=250000;
            total=biayaNginap+(jamParkir-8)*biayaPerjam;
            cout<<"Jenis Kendaraan adalah: "<<jns_kend<<endl;
            cout<<"Biaya Parkir adalah: "<<total<<endl;
        }
    }
    return 0;
}

    