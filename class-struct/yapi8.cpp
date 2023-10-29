#include<iostream>
#define PI 3.14

using namespace std;

struct nokta{
	int x;
	int y;
}Nokta;

struct daire{
	float yaricap;
	nokta merkez;
}Daire;

void daireBilgisiYazdir(daire d);

int main(int argc, char** argv){
	
	cout<<"Dairenin merkezinin x kordinatini giriniz:";
	cin>>Daire.merkez.x;
	cout<<endl;
	
	cout<<"Dairenin merkezinin y kordinatini giriniz:";
	cin>>Daire.merkez.y;
	cout<<endl;
	
	cout<<"Dairenin yaricap uzunlugunu giriniz:";
	cin>>Daire.yaricap;
	cout<<endl;
	
	daireBilgisiYazdir(Daire);
	return 0;
}

void daireBilgisiYazdir(daire d){
	float cevre=2*PI*d.yaricap;
	float alan=PI*d.yaricap*d.yaricap;
	
	cout<<"Daire Bilgileri:"<<endl;
	cout<<"Dairenin Merkez Kordinatlarý:"<<"  X:"<<d.merkez.x<<"  Y:"<<d.merkez.y<<endl;
	cout<<"Dairenin Yaricapi:"<<d.yaricap<<endl;
	cout<<"Dairenin Cevresi:"<<cevre<<endl;
	cout<<"Dairenin Alani:"<<alan<<endl;
}
