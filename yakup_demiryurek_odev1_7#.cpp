#include<iostream>
using namespace std;
//1�den kullan�c�n�n girdi�i say�ya kadar olan t�m asal say�lar� ekrana yazd�ran program�n kodu
int main()
{
	int x,y,z; //Tan�mla.
	int sayac=0;
	cout << "Lutfen Sayi Giriniz:"; // Kullan�c�dan say� al.
	cin >> x;
	for(y=2 ; y<=x ; y++) //y'nin x'e g�re de�i�imini tan�mla.
	{
	    	for(z=1 ; z<=y ; z++) //z'nin y'ye g�re de�i�imini tan�mla.
	    	{
	    		if((y%z)==0) //y'nin z de�erinde modunu al.
	    		{
	    		sayac=sayac+1; 
				}
			}
		if(sayac==2) // De�er de�i�tirerek sayac�n 2 oldu�u de�erleri al.
		{
		cout << y << endl; // De�erleri ekrana yazd�r.
		}
	sayac=0;	
	}
}
