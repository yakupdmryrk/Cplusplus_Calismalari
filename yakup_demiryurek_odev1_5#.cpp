#include <iostream>

using namespace std;
//Kullanýcýnýn girdiði 2 sayý arasýndaki 3’e bölünebilen sayýlarý ekrana yazdýran programýn kodu
int main()
{
	int sayi1,sayi2; //Tanýmla.
	cout << "Birinci Sayiyi Giriniz: " << endl ; // Kullanýcýdan sayý al.
	cin >> sayi1 ;
	cout << "Ikinci Sayiyi Giriniz: " << endl ;  // Kullanýcýdan sayý al.
	cin >> sayi2 ;
	if(sayi1<sayi2);
	{
		for(int y=sayi1; y<sayi2 ; y++) // Küçük sayý ile büyük sayýyý belirleyip döngüye gir.
		
	    {
		    if (y%3 == 0 )
		    {
		    	cout << y << endl;
			}
		}
    }
    if(sayi2<sayi1);
	{
		for(int y=sayi2 ; y<sayi1 ; y++) // Küçük sayý ile büyük sayýyý belirleyip döngüye gir.
	    {
		    if (y%3 == 0 )
		    {
		    	cout << y << endl;
			}
		}
    }
	
	return 0;
}
