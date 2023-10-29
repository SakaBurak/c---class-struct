#include<iostream>
#include<stdio.h>

using namespace std;

struct SinemaFilmi{
	char ad[100];
	char yonetmen[50];
	int yapimYili;
};

void filmYazdirDegerYontemiyle(SinemaFilmi);

int main(int argc, char** argv){
	SinemaFilmi film1={"Burn After Reading","Ethan&John Cohen",2008};
	filmYazdirDegerYontemiyle(film1);
	return 0;
}

void filmYazdirDegerYontemiyle(SinemaFilmi arg){
	cout<<arg.ad<<endl;
	cout<<arg.yonetmen<<endl;
	cout<<arg.yapimYili<<endl;
}
