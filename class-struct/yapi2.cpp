#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

struct Film{
	char ad[100];
	char yonetmen[50];
	int yapimYili;
};

int main(){
	Film film1={"Batman","Christopher Nolan",2005};
	Film * filmptr=&film1;
	
	cout<<"Film adi:"<<(*filmptr).ad<<endl;
	cout<<"Yonetmen:"<<filmptr->yonetmen<<endl;
	cout<<"Yapim yili:"<<filmptr->yapimYili<<endl;
	
	return 0;
}
