#include <iostream>
using namespace std;
int main(){
    int murid, guru,hasil;
    string tingkatpend;
    cout <<"Program  bantuan  kuota  akses  internet";
    cout << "\nMasukkan Tingkat Instansi Pendidikan :(PAUD, SD, SMP, SMA, Perguruan Tinggi) \n *Penulisan harus sama dengan yang ada di dalam kurung*"; getline(cin, tingkatpend);
    if (tingkatpend=="PAUD")
    {
        cout<<"Masukkan jumlah murid: "; cin>>murid;
        hasil=20*murid*6000;
    }
    else if (tingkatpend=="SD"||"SMP"||"SMA"){
        cout<<"Masukkan jumlah murid   : "; cin>>murid;
        cout<<"Masukkan jumlah pengajar: "; cin>>guru;
        hasil=(murid*35+guru*42)*6000;

    }
    else if (tingkatpend=="Perguruan Tinggi")
    {
        cout<<"Masukkan jumlah mahasiswa: "; cin>>murid;
        cout<<"Masukkan jumlah pengajar : "; cin>>guru;
        hasil=(murid*50+guru*50)*6000;
    }
    else{cout<< "Salah memasukkan tingkat instansi.";}
        cout<<"Dana yang dibutuhkan untuk bantuan kuota "<<tingkatpend<<" terkait adalah sebesar Rp"<<hasil;
    return 0;
}
