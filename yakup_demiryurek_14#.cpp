#include <iostream>
using namespace std;
//Kullan�c�n girdi�i sat�r ve s�tun say�lar�na g�re olu�turulan i�i bo� dikd�rtgen
int main()
{
	int x,y;
	cout << "Satir Sayisi Giriniz:";           //Kullan�c�dan Say� al.
	cin >> x;                           
	cout << "Sutun Sayisi Giriniz:";           //Kullan�c�dan Say� al.
	cin >> y;
	for(int i=1; i <= x; i++)                  //Sat�r say�s�
	{
		for(int j=1; j <= y; j++)              //Bo�luk mu yoksa y�ld�z m� koyaca��n� tan�mla.
		{
			if((i==1)||(j==1)||(i==x)||(j==y)) //Sat�ra ba�l� olarak y�ld�z konulmas� gereken yerleri tan�mla.
			cout << "*";                       //Ekrana y�ld�z yazd�r.
			
			else                               //Sat�ra ba�l� olarak bo�luk konulmas� gereken yerleri tan�mla.
			cout << " ";                       //Ekrana bo�luk yazd�r
		}
	cout << endl;
	}
}
