#include <iostream>
using namespace std;
//3 kenar uzunlu�u girilen bir ��genin ne t�r bir ��gen oldu�unu ekrana yazd�ran program�n kodu
int main()
{

int sayi1, sayi2, sayi3 ;    //Tan�mla.               
cout << "Lutfen birinci sayiyi giriniz: " ; // Kullan�c�dan say� al.
cin >> sayi1 ;
cout << "Lutfen ikinci sayiyi giriniz: " ;
cin >> sayi2 ;
cout << "Lutfen ucuncu sayiyi giriniz: " ;
cin >> sayi3 ;

    if(sayi1==sayi2 && sayi2==sayi3)      // 1.olas�l�k
	{
        cout << "Eskenar Ucgen" << endl;
    }
        else if(sayi1==sayi2 && sayi2!=sayi3 || sayi2==sayi3 && sayi2!=sayi1 || sayi1==sayi3 && sayi3!=sayi2  ) // 2.olas�l�k
        {
            cout << "Ikizkenar Ucgen" << endl;
        }
            else                         // 1. ve 2. olas�l�k d���ndaki olas�l�klar
            {
                cout << "Cesitkenar Ucgen" << endl;
            }
}
