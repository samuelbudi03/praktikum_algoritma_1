#include<iostream>
using namespace std;

int main(){
int i,bilangan, jum=0;
cout<<"Menentukan jumlah bilangan ganjil pada suatu bilangan\n";
cout<<"\nMasukkan bilangan:";
cin>>bilangan;
for(i=10; i<bilangan; i++){
	if((i%2)==1)
	jum++;
}
cout<<"\nBanyaknya bilangan ganjil sebelum "<<bilangan<<" Adalah "<<jum<<" bilangan"<<endl;
return 0;
}