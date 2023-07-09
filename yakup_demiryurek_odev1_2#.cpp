#include<iostream>
using namespace std;
//Ayýn 1. günü Perþembe ise x’inci günün hangi gün olduðunu ekrana yazdýran program kodu

int main ()
{
	int x; //Tanýmla.
	cout << "Lutfen Sayi Giriniz:"; //Kullanýcýdan sayý al.
	cin >> x;
	if (x%7==0) //Kullanýcýdan alýnan sayýnýn modunu al.
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
	cout << "Salý";
	else if (x%7==6)
	cout << "Carsamba";
}
