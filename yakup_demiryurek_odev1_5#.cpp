#include <iostream>

using namespace std;
//Kullan�c�n�n girdi�i 2 say� aras�ndaki 3�e b�l�nebilen say�lar� ekrana yazd�ran program�n kodu
int main()
{
	int sayi1,sayi2; //Tan�mla.
	cout << "Birinci Sayiyi Giriniz: " << endl ; // Kullan�c�dan say� al.
	cin >> sayi1 ;
	cout << "Ikinci Sayiyi Giriniz: " << endl ;  // Kullan�c�dan say� al.
	cin >> sayi2 ;
	if(sayi1<sayi2);
	{
		for(int y=sayi1; y<sayi2 ; y++) // K���k say� ile b�y�k say�y� belirleyip d�ng�ye gir.
		
	    {
		    if (y%3 == 0 )
		    {
		    	cout << y << endl;
			}
		}
    }
    if(sayi2<sayi1);
	{
		for(int y=sayi2 ; y<sayi1 ; y++) // K���k say� ile b�y�k say�y� belirleyip d�ng�ye gir.
	    {
		    if (y%3 == 0 )
		    {
		    	cout << y << endl;
			}
		}
    }
	
	return 0;
}
