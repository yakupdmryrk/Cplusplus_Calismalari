#include <iostream>
using namespace std;
//Kullan�c�dan al�nan 10 say�n�n ortalamas�n� al�p ekrana yazd�ran program�n kodu
int main()
{
	double sayi,sayi1,sayi2,sayi3,sayi4,sayi5,sayi6,sayi7,sayi8,sayi9,ortalama; //Tan�mla.
	cout << "Lutfen 1. Sayiyi Giriniz:"; // Kullan�c�dan 10 adet say� al.
	cin >> sayi;
	cout << "Lutfen 2. Sayiyi Giriniz:";
	cin >> sayi1;
	cout << "Lutfen 3. Sayiyi Giriniz:";
	cin >> sayi2;
	cout << "Lutfen 4. Sayiyi Giriniz:";
	cin >> sayi3;
	cout << "Lutfen 5. Sayiyi Giriniz:";
	cin >> sayi4;
	cout << "Lutfen 6. Sayiyi Giriniz:";
	cin >> sayi5;
	cout << "Lutfen 7. Sayiyi Giriniz:";
	cin >> sayi6;
	cout << "Lutfen 8. Sayiyi Giriniz:";
	cin >> sayi7;
	cout << "Lutfen 9. Sayiyi Giriniz:";
	cin >> sayi8;
	cout << "Lutfen 10. Sayiyi Giriniz:";
	cin >> sayi9;
	ortalama=(sayi+sayi1+sayi2+sayi3+sayi4+sayi5+sayi6+sayi7+sayi8+sayi9)/10; //Girilen de�erleri yerine yaz.
	cout << "Girdiginiz 10 Sayi'nin Ortalamasi:" << ortalama << endl; //Sonucu ekrana yazd�r.
}
