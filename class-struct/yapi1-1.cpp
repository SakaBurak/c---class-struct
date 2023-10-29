#include<iostream>

struct Calisan{
	int id{};
	int yas{};
	double ucret{};
};

int main(){
	Calisan joe;
	joe.id=14;
	joe.yas=32;
	joe.ucret=60000.0;
	
	Calisan frank;
	frank.id=15;
	frank.yas=28;
	frank.ucret=45000.0;
	
	int totalAge {joe.yas+frank.yas};
	
	if(joe.ucret>frank.ucret)
	   std::cout<<"Joe Franktan daha fazla ucret almaktadir'\n";
	else if(joe.ucret<frank.ucret)
	   std::cout<<"Joe Franktan daha az ucret almaktadir'\n";
	else 
	   std::cout<<"Joe ve Frank ayni ücreti almaktadir'\n";
	   
	frank.ucret +=50000.0;
	
	if(joe.ucret>frank.ucret)
	   std::cout<<"Joe Franktan daha fazla ucret almaktadir'\n";
	else if(joe.ucret<frank.ucret)
	   std::cout<<"Joe Franktan daha az ucret almaktadir'\n";
	else 
	   std::cout<<"Joe ve Frank ayni ücreti almaktadir'\n";
	   
	++joe.yas;
	
	return 0;
}
