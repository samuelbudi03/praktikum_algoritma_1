#include <stdio.h>
#include <iostream>
setw
using namespace std;

int main(){
	char nama [20], nim[10], huruf;
	int jumlah;
	float nilai;
	//modul 4.1
	printf("Masukkan nama anda: ");
	gets(nama);
	printf ("Halo, %s nama",nama);

	//modul 4.2
	cout<<endl;
	cout << "\nMasukkan nama anda: "; cin.getline(nama,sizeof(nama));
	cout << "Halo" <<nama;

	//modul4.3
	printf("Masukkan sebuah angka: ");
	scanf("%d", jumlah);
	printf("Masukkan sebuah huruf: ");
	scanf("%c",huruf);
	printf("Masukkan nama: ");
	scanf("%s", nama);
	printf("Masukkan nim: ");
	scanf("%c", nim);
	printf("Masukkan nilai: ");
	scanf("%f", nilai);
	printf("\nData Anda:");
	printf("\nangka: %d", jumlah);
	printf("\nhuruf: %c", huruf);
	printf("Nama: %s", nama);
	printf("NIM: %c",nim);
	printf("nilai: %4.2f", nilai)
	//4.4
	cout << "\n\nMasukkan sebuah bilangan bulat : ";cin >> jumlah;        
	cout << "Masukkan sebuah karakter : ";cin >> huruf;
	cout << "Masukkan nim Anda : ";cin >> nim;
	  cout << "Masukkan nama Anda : ";cin.ignore(); getline(cin, nama);
	  cout << "Masukkan sebuah bilangan pecahan : ";cin >> nilai;
	  cout << "\n Nilai variabel yang Anda masukkan adalah :\n";
	  cout << "\njumlah = " << jumlah;
	  cout << "\nhuruf= " << huruf;
	  cout << "\nnim = " << nim;
	  cout << "\nnama = " << nama;
	  cout << "\nnilai = " << nilai;
    //4.5
	 puts("Masukkan nilai Anda : "); 
	 scanf("%f", &nilai);
	 printf("Nilai Anda adalah %5.2f \n", nilai);
	 printf("Apakah Anda puas mendapat nilai %6.4f ?", nilai);
	//4.6
	 cout <<"Masukkan nilai Anda: "; cin>>nilai;
	 cout <<"Nilai Anda adalah" <<fixed<<setprecision(2)<<nilai;
	 cout << "Apakah Anda puas mendapat nilai "<<fixed<<setprecision(4)<<nilai<< "?";

	return 0;
}
