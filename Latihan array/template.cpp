#include <iostream>
#include <math.h>

using namespace std;
int main(){
		cout<<"Kasus 1 - Array "<<endl;
		cout<<"==================START=================="<<endl;
		cout<<endl;
		 int input_n=0;
		 int angka_ke=0;
		 int angka_terbesar=0;
		 int angka_terkecil=0;
		 int jumlah=0;
		 int urutan[input_n];

		 cout<<"-------------output 1--------------"<<endl;
		 cout<<"Input n = ";
		 cin>>input_n;
		 cout<<endl;
		 for(int i=1;i<=input_n;i++){
			cout<<"Input Ke- "<<i<<" = ";
			cin>>angka_ke;
			urutan[i]=angka_ke;
		 }cout<<endl;
		 cout<<"Hasil Array = ";
		 for(int x=1;x<=input_n;x++){
			cout<<urutan[x]<<" , ";
		 }
		 cout<<endl;
		 cout<<endl;
		 cout<<"-------------output 2----------------"<<endl;
		 cout<<"Input n = ";
		 cin>>input_n;
		 cout<<endl;
		 for(int i=1;i<=input_n;i++){
			cout<<"Input Ke- "<<i<<" = ";
			cin>>angka_ke;
			urutan[i]=angka_ke;
		 }cout<<endl;
		 cout<<"Hasil Array = ";
		 for(int x=1;x<=input_n;x++){
			cout<<urutan[x]<<" , ";
		 }
		 cout<<endl;
		 cout<<"END*"<<endl;
		 cout<<endl;
		 cout<<endl;
		 cout<<"Kasus 2 - Array Terbalik"<<endl;
		 cout<<"=====================START======================="<<endl;
		 cout<<endl;
		 cout<<"------------output 1-------------"<<endl;
		 cout<<"Input n = ";
		 cin>>input_n;
		 cout<<endl;
		for(int a=1;a<=input_n;a++){
		cout<<"Input ke- "<<a<<" = ";
		cin>>angka_ke;
			urutan[a]=angka_ke;
		 }cout<<endl;
		 cout<<"Hasil Array = ";
		 for(int b=1;b<=input_n;b++){
			cout<<urutan[b]<<" , ";
		 }cout<<endl;
		cout<<"Reverse Array = ";
		for(int c=input_n;c>=1;c--){
			cout<<urutan[c]<<" , ";
		 }
		 cout<<endl;
		 cout<<endl;
		 cout<<"------------output 2----------"<<endl;
		 cout<<"Input n = ";
		 cin>>input_n;
		 cout<<endl;
		 for(int a=1;a<=input_n;a++){
		cout<<"Input ke- "<<a<<" = ";
		cin>>angka_ke;
			urutan[a]=angka_ke;
		 }cout<<endl;
		 cout<<"Hasil Array = ";
		 for(int b=1;b<=input_n;b++){
			cout<<urutan[b]<<" , ";
		 }cout<<endl;
		cout<<"Reverse Array = ";
		for(int c=input_n;c>=1;c--){
			cout<<urutan[c]<<" , ";
		 }
		 cout<<endl;
		 cout<<"END"<<endl;
		 cout<<endl;
		 cout<<endl;
		 cout<<"Kasus 3-Terbesar,Terkecil,Jumlah,Rata-Rata "<<endl;
		 cout<<"====================START=========================="<<endl;
		 cout<<endl;
		 cout<<"-------------output 1--------------"<<endl;
		 cout<<"Input n = ";
		 cin>>input_n;
		 cout<<endl;
		 for(int i=1;i<=input_n;i++){
			cout<<"Input Ke- "<<i<<" = ";
			cin>>angka_ke;
			urutan[i]=angka_ke;
			if(i==1)
				{
				angka_terbesar=angka_ke;
				angka_terkecil=angka_ke;
				}
		    if (angka_ke>angka_terbesar)angka_terbesar=angka_ke;
			if (angka_ke<angka_terkecil)angka_terkecil=angka_ke;

			jumlah+=angka_ke;
		    }
			 cout << "Hasil Array = ";
            for (int i=1;i<=input_n;i++){
            cout<<urutan[i]<<" , ";
			}
            cout<<endl;

            cout<<"Nilai terbesar = "<<angka_terbesar<<endl;
		    cout<<"Nilai terkecil = "<<angka_terkecil<<endl;
            cout<<"Jumlah = "<<jumlah<<endl;
            cout<<"Rata-rata = "<<(double)jumlah/input_n<<endl;
			cout<<endl;
		cout<<"*END"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Kasus 4-Array bilangan Genap/Ganjil"<<endl;
		cout<<"=======================START==================="<<endl;
		cout<<endl;
		cout<<"-------------output 1--------------"<<endl;
		cout<<"Input n = ";
		cin>>input_n;
		cout<<endl;
        for(int i=1;i<=input_n;++i){
        cout<<"Input ke-"<<i<<" = ";
        cin>>urutan[i];
        }
        cout << endl;
		cout<<"Hasil Array Genap = ";
        for (int i=1;i<=input_n; ++i) {
        if (urutan[i]%2==0){
            cout<<urutan[i]<<" , ";
        }
        }
        cout<<endl;
        cout<<"Hasil Array Ganjil = ";
        for (int i=1;i<=input_n;++i) {
        if (urutan[i]%2==0+1) {
            cout<<urutan[i]<<" , ";
        }
        }
        cout<<endl;
		cout<<"*END"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Kasus 4a - Positif/Negatif Genap,Positif/Negatif Ganjil."<<endl;
		cout<<"=======================START==================="<<endl;
		cout<<endl;
		cout<<"Input n = ";
		cin>>input_n;
		cout<<endl;
        for(int i=1;i<=input_n;i++){
        cout<<"Input ke-"<<i<<" = ";
        cin>>urutan[i];
        }
        cout << endl;
		cout<<"Hasil Array Positif Genap = ";
        for (int i=1;i<=input_n;i++) {
        if (urutan[i]>0 && urutan[i]%2==0){
            cout<<urutan[i]<<" , ";
        }
        }
        cout<<endl;
        cout<<"Hasil Array Negatif Genap = ";
        for (int i=1;i<=input_n;i++) {
        if (urutan[i]<0 && urutan[i]%2==0) {
            cout<<urutan[i]<<" , ";
        }
        }
         cout << endl;
		cout<<"Hasil Array Positif Ganjil = ";
        for (int i=1;i<=input_n;i++) {
        if (urutan[i]>0 && urutan[i]%2==0+1){
            cout<<urutan[i]<<" , ";
        }
        }
        cout<<endl;
        cout<<"Hasil Array Negatif Ganjil = ";
        for (int i=1;i<=input_n;i++) {
        if (urutan[i]<0 && urutan[i]%2!=0) {
            cout<<urutan[i]<<" , ";
        }
        }
        cout<<endl;
		cout<<"*END"<<endl;
		cout<<endl;
		cout<<endl;
		cout<<"Kasus 5 - Array 0 or 1"<<endl;
		cout<<"=======================START==================="<<endl;
		cout<<endl;
		cout<<"Input n = ";
		cin>>input_n;
		cout<<endl;
        for(int i=1;i<=input_n;i++){

        if(i%2==0)
			urutan[i]=0;
		else
			urutan[i]=1;
        }
        cout<<"Hasil Array = ";
        for(int i=0;i<input_n;i++){
			cout<<urutan[i]<<" , ";
        }

return 0;
}