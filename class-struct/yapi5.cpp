#include<iostream>
#include<stdio.h>

using namespace std;

struct SinemaFilmi{
	char ad[100];
	char yonetmen[50];
	int yapimyili;
};

int main(int argc, char** argv){
	SinemaFilmi film1={"Burn After Reading","Ethan&John Cohen",2008};
	SinemaFilmi film2;
	film2=film1;
	cout<<film2.ad<<endl;
	cout<<film2.yonetmen<<endl;
	cout<<film2.yapimyili<<endl;
	
	return 0;
}
