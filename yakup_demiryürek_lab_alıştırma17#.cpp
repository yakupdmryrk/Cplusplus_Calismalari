#include <time.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main()
{
	int a,b;
	int toplam = 0;
	srand (time(NULL));
	a=rand() %1000+261;
	cout << "Lutfen bir sayi giriniz: " ;
	cin >> b;
	while(a<b)
	{
		cout << "Bulmaniz Gereken Sayidan Buyuk Girdiniz Tekra Deneyiniz: ";
		cin >> b;
		toplam++;
		
	}
	while(b<a)
	{
		cout << "Bulmaniz Gereken Sayidan Kucuk Girdiniz Tekra Deneyiniz: ";
		cin >> b;
		toplam++;
		
	}
	while(a = b)
	{
		cout << "Dogru Bildiniz Tebrikler " << toplam+1 << ". Denemenizde Buldunuz";
		break;
	}
}
