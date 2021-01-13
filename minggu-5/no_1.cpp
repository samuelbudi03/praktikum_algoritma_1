#include<iostream>
using namespace std;
float volumetabung(float r, float t);
float volumekerucut(float r, float t);
void segitiga(float p, float t, float s1, float s2);
void persegipanjang (float p, float t);
int main(){
    char pilihan;
    float r, t, p, l,s1,s2,vt,vk;
    cout<<"Penghitungan: \na.volume tabung\nb.volume kerucut\nc.keliling dan luas segitiga\nd.keliling dan luas persegi panjang"<<endl;
    cout<<"Pilihan: ";cin>>pilihan;
    if (pilihan=='a')
    {
        cout<<"Masukkan panjang jari-jari(r): ";cin>>r;
        cout<<"Masukkan tinggi(t): ";cin>>t;
        vt=volumetabung(r,t);
        cout<<"Volume tabung adalah "<<vt;
    }
    else if (pilihan=='b')
    {
        cout<<"Masukkan panjang jari-jari(r): ";cin>>r;
        cout<<"Masukkan tinggi(t): ";cin>>t;
        vk=volumekerucut(r,t);
        cout<<"Volume kerucut adalah "<<vk;
    }
    else if (pilihan=='c')
    {
        cout<<"Masukkan panjang alas (a): ";cin>>p;
        cout<<"Masukkan tinggi(t): ";cin>>t;
        cout<<"Masukkan sisi lain pertama: ";cin>>s1;
        cout<<"Masukkan sisi lain pertama: ";cin>>s2;
        segitiga(p, t, s1, s2);
    }
    else if (pilihan=='d')
    {
        cout<<"Masukkan panjang (p): ";cin>>p;
        cout<<"Masukkan lebar(l): ";cin>>l;
        persegipanjang (p,l);
    }
    return 0;
}
float volumetabung(float r, float t){
    float vt=r*r*t*22/7;
    return vt;
}
float volumekerucut(float r, float t){
    float vk=r*r*t*22/7/3;
    return vk;
}
void segitiga(float p, float t, float s1, float s2){
    cout<< "Luas segitiga adalah "<<p*t/2<<endl;
    cout<< "Keliling segitiga adalah "<<p+s1+s2<<endl;
}

void persegipanjang (float p, float l){
cout<< "Luas persegi panjang adalah "<<p*l<<endl;
cout<< "Keliling persegi panjang adalah "<<2*(p+l)<<endl;
}