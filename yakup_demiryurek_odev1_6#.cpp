#include <iostream>
using namespace std;
//Kullanýcýnýn girdiði sayýnýn faktöriyelini alýp ekrana yazdýran programýn kodu
int main()
{
	int sayi; //Tanýmla.
	int sonuc=1; //Sonucun en son 1 olucaðýný tanýmla.
	cout << "Lutfen Sayi Giriniz:";  // Kullanýcýdan sayý al.
	cin >> sayi;
	for( int x=0 ; x<sayi ; sayi--) //x'in sayýya göre deðiþimini tanýmla.
	{
		sonuc=(sonuc*sayi); //Elde edilen deðerleri yerine yaz.
	}
	cout << sonuc; //Sonucu ekrana yazdýr.
}
