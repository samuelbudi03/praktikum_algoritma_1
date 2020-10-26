#include <iostream>
using namespace std;
int main(){
	int no_hp;
	string kelas, nama, alamat, sex, email, nim;
	cout << "Nama: "; getline(cin, nama);
	cout << "NIM: "; cin>>nim; 
	cout << "Kelas: "; cin.ignore(); getline(cin, kelas);
	cout << "Jenis Kelamin: "; getline(cin, sex);
	cout << "Alamat: "; getline(cin, alamat);
	cout << "Email: "; cin>>nama;
	cout << "No. HP: "; cin>>no_hp;
	cin.get();
	return 0;
}