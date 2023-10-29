#include<iostream>
#include<string>

using namespace std;

struct ogrenci{
	int id;
	char ad[20];
	char soyad[20];
	int yas;
	char bolum[25];
};

int main(){
	ogrenci ogrenciler[4]={{1,"Ahmet","Ulu",18,"Muhendislik"},{2,"Yeliz","Aktas",25,"Mimarlik"},{3,"Ebru","Kara",19,"Isletme"}};
	
	cout<<"1.ogrenci adi:"<<ogrenciler[0].ad<<endl;
	cout<<"2.ogrenci soyadi:"<<ogrenciler[1].soyad<<endl;
	cout<<"3.ogrenci yasi:"<<ogrenciler[2].yas<<endl;
	cout<<endl;
	cout<<"4.ogrenciyi giriniz:"<<endl;
	cin>>ogrenciler[3].id;                      // >>ogrenciler[3].ad>>ogrenciler[3].soyad>>ogrenciler[3].yas>>ogrenciler[3].bolum;
	cin.ignore();
	cin.getline(ogrenciler[3].ad,20);
	cin.getline(ogrenciler[3].soyad,20);
	cin>>ogrenciler[3].yas;
	cin.ignore();
	cin.getline(ogrenciler[3].bolum,25);
	
	cout<<"4.ogrenci yasi:"<<ogrenciler[3].yas<<endl;
	
	
	for(int i=0;i<4;i++){
		cout<<i+1<<". ogrenci adi:"<<ogrenciler[i].ad<<endl;
		cout<<i+1<<". ogrenci soyadi:"<<ogrenciler[i].soyad<<endl;
		cout<<i+1<<". ogrenci yasi:"<<ogrenciler[i].yas<<endl;
		cout<<i+1<<". ogrenci bolumu:"<<ogrenciler[i].bolum<<endl;
		cout<<i+1<<". ogrenci id'si:"<<ogrenciler[i].id<<endl;
	}
	return 0;
}
