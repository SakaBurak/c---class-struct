#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;

struct SinemaFilmi{
	char ad[100];
	char yonetmen[50];
	int yapimYili;
};

int main(int argc, char** argv){
	SinemaFilmi *filmptr;
	filmptr=(SinemaFilmi*)malloc(sizeof(SinemaFilmi));
	strcpy(filmptr->ad ,"Departed");
	strcpy(filmptr->yonetmen,"Martin Scorsese");
	filmptr->yapimYili=2006;
	
	cout<<filmptr->ad<<endl;
	cout<<filmptr->yonetmen<<endl;
	cout<<filmptr->yapimYili<<endl;
	
	free(filmptr);
	
	return 0;
}
