#include <iostream>
using namespace std;
//Kullan�c�n�n girdi�i say�n�n fakt�riyelini al�p ekrana yazd�ran program�n kodu
int main()
{
	int sayi; //Tan�mla.
	int sonuc=1; //Sonucun en son 1 oluca��n� tan�mla.
	cout << "Lutfen Sayi Giriniz:";  // Kullan�c�dan say� al.
	cin >> sayi;
	for( int x=0 ; x<sayi ; sayi--) //x'in say�ya g�re de�i�imini tan�mla.
	{
		sonuc=(sonuc*sayi); //Elde edilen de�erleri yerine yaz.
	}
	cout << sonuc; //Sonucu ekrana yazd�r.
}
