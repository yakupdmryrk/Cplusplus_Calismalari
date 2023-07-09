#include<iostream>
using namespace std;
//1’den kullanýcýnýn girdiði sayýya kadar olan tüm asal sayýlarý ekrana yazdýran programýn kodu
int main()
{
	int x,y,z; //Tanýmla.
	int sayac=0;
	cout << "Lutfen Sayi Giriniz:"; // Kullanýcýdan sayý al.
	cin >> x;
	for(y=2 ; y<=x ; y++) //y'nin x'e göre deðiþimini tanýmla.
	{
	    	for(z=1 ; z<=y ; z++) //z'nin y'ye göre deðiþimini tanýmla.
	    	{
	    		if((y%z)==0) //y'nin z deðerinde modunu al.
	    		{
	    		sayac=sayac+1; 
				}
			}
		if(sayac==2) // Deðer deðiþtirerek sayacýn 2 olduðu deðerleri al.
		{
		cout << y << endl; // Deðerleri ekrana yazdýr.
		}
	sayac=0;	
	}
}
