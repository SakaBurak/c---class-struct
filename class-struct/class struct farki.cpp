/*#include<iostream>

struct TarihYapisi{
	int gun;
	int ay;
	int yil;
};

void yazdir(const TarihYapisi& tarih){
	std::cout<<tarih.gun<<"/"<<tarih.ay<<"/"<<tarih.yil;
}

int main(){
	TarihYapisi bugun{04,10,2023};
	
	bugun.gun=13;
	yazdir(bugun);
	
	return 0;
}*/

#include<iostream>

class TarihYapisi
{
	public:
		int m_gun;
		int m_ay;
		int m_yil;
		
		void yazdir()
{
	std::cout<<m_gun<<"/"<<m_ay<<"/"<<m_yil;
}
};

int main(){
	TarihYapisi bugun{04,10,2023};
	
	bugun.m_gun=13;
	bugun.yazdir();
	
	return 0;
}
