#include <iostream>
using namespace std;
int main(){
	int survei1, survei2,odp,kematian;
	cout <<"Program Peninjauan Covid-19 di Kecamatan";
	cout << "\nJumlah positif Covid-19 pada survei pertama : "; cin>>survei1;
    cout << "\nJumlah positif Covid-19 pada survei kedua   : "; cin>>survei2;
    cout << "\nJumlah ODP Covid-19                         : "; cin>>odp;
    cout << "\nJumlah kematian akibat Covid-19             : "; cin>>kematian;
    if ((survei1>0&&survei2>0)&&((survei2>survei1)||(kematian>0&&odp>0)))
    {
      	cout<<"Daerah ini merupakan Zona Hitam";
    }
    else if ((survei2>0||survei1>0) && (kematian==0 &&odp>0)){
      	cout<<"Daerah ini merupakan Zona Merah";
    }
    else if (survei1==0 && survei2==0 && odp>0 && kematian==0)
    {
    	cout<<"Daerah ini zona oren";
    }
    else if(survei1==0 && survei2==0 && odp=0 && kematian==0){
    	cout <<"Daerah ini warna hijau";}
        return 0;
}
