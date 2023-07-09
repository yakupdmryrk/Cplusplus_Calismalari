#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main() 
{
	srand (time(NULL));
	int siralimi;
	int eleman_sayisi ;
	int sayi1;
	cout << "Lutfen Dizi Girin: ";
	cin >> sayi1;
	eleman_sayisi=sayi1;
	int x,y;
	int dizi[eleman_sayisi];
	for (int i = 0; i < (eleman_sayisi) ; i++)
	{
		dizi[i] = rand() % 1000;
		cout << dizi[i] << " ";
	}
cout << endl << "Buyukten Kucuge: " << endl;
	for(int i=0 ; i<eleman_sayisi ; i++) 
	{
		siralimi = 1;
		for(int z=0 ; z<(eleman_sayisi-1) ; z++)
		{
			if(dizi[z+1]>dizi[z]) 
			{
				siralimi = 0;
				x=dizi[z+1]; 
				dizi[z+1]=dizi[z];
				dizi[z]=x; 
			}		
		}
		if(siralimi == 1)
		{
			break;
		}
	}
	
	for(int i=0 ; i<eleman_sayisi ; i++)
	{
		cout << dizi[i] << " " ; //Deðerleri aralarýnda bir boþluk olucak þekilde sýrala.
	}
	cout << endl;
	cout << "En Buyuk 3.Sayi: " << dizi[2];
cout << endl << "Kucukten Buyuge: " << endl;
	for(int i=0 ; i<eleman_sayisi ; i++) //Sayýlarý denetle.
	{
		for(int z=0 ; z<(eleman_sayisi-1) ; z++) // Ele aldýðýmýz iki elemaný onlardan sonraki sayýyla kýyasla.
		{
			if(dizi[z]>dizi[z+1]) // Kýyaslamaya göre diz.
			{
				y=dizi[z]; //Ele alýnan ilk sayýyý en büyük kabul et ve temp(x)'e at.
				dizi[z]=dizi[z+1]; //Ele alýnan deðerlere göre büyük olaný sýraya koy.
				dizi[z+1]=y; //Temp'in içindeki büyük olan deðeri sýradaki deðerle deðiþtir.
			}
		}
	}
	for(int i=0 ; i<eleman_sayisi ; i++)
	{
		cout << dizi[i] << " " ; //Deðerleri aralarýnda bir boþluk olucak þekilde sýrala.
	}
	cout << endl;
	cout << "En Kucuk 2.Sayi: " << dizi[1];		
}   
