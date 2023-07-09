#include <iostream>
using namespace std;
//Kullanýcýdan alýnan 10 sayýnýn ortalamasýný alýp ekrana yazdýran programýn kodu
int main()
{
	double sayi,sayi1,sayi2,sayi3,sayi4,sayi5,sayi6,sayi7,sayi8,sayi9,ortalama; //Tanýmla.
	cout << "Lutfen 1. Sayiyi Giriniz:"; // Kullanýcýdan 10 adet sayý al.
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
	ortalama=(sayi+sayi1+sayi2+sayi3+sayi4+sayi5+sayi6+sayi7+sayi8+sayi9)/10; //Girilen deðerleri yerine yaz.
	cout << "Girdiginiz 10 Sayi'nin Ortalamasi:" << ortalama << endl; //Sonucu ekrana yazdýr.
}
