#include<iostream>
using namespace std;
//Ay�n 1. g�n� Per�embe ise x�inci g�n�n hangi g�n oldu�unu ekrana yazd�ran program kodu

int main ()
{
	int x; //Tan�mla.
	cout << "Lutfen Sayi Giriniz:"; //Kullan�c�dan say� al.
	cin >> x;
	if (x%7==0) //Kullan�c�dan al�nan say�n�n modunu al.
	cout << "Persembe";
	else if (x%7==1)
	cout << "Cuma";
	else if (x%7==2)
	cout << "Cumartesi";
	else if (x%7==3)
	cout << "Pazar";
	else if (x%7==4)
	cout << "Pazartesi";
	else if (x%7==5)
	cout << "Sal�";
	else if (x%7==6)
	cout << "Carsamba";
}
