#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	string nama;
	int nim, plug;
	cout << "Masukkan:\n";
	cout << "Nama"<<setw(10)<<":";getline(cin, nama);
	cout << "NIM "<<setw(10)<<":"; cin>>nim;
	cout << "Plug"<<setw(10)<<":";cin>>plug;
	cout << "\nInilah data Anda:\n";
	cout << "Nama"<<setw(10)<<":"<<nama<<endl;
	cout << "NIM "<<setw(10)<<":"<<nim<<endl;
	cout << "Plug"<<setw(10)<<":"<<plug<<endl;
	cout << "\nInilah tabel Anda:\n";
	cout <<"==========================================================================================================\n";
	cout <<"NIM      "<<"|"<<setw(14)<<"Nama"<<setw(14)<<"|"<<setw(15)<<"Plug"<<endl;
	cout <<"==========================================================================================================\n";
	cout <<nim<<"|"<<setw(28)<<nama<<"|"<<setw(15)<<plug<<endl;
	cin.get();
	cin.get();
	return 0;
}
