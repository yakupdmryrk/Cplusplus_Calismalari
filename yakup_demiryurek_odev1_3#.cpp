#include <iostream>
using namespace std;
//3 kenar uzunluðu girilen bir üçgenin ne tür bir üçgen olduðunu ekrana yazdýran programýn kodu
int main()
{

int sayi1, sayi2, sayi3 ;    //Tanýmla.               
cout << "Lutfen birinci sayiyi giriniz: " ; // Kullanýcýdan sayý al.
cin >> sayi1 ;
cout << "Lutfen ikinci sayiyi giriniz: " ;
cin >> sayi2 ;
cout << "Lutfen ucuncu sayiyi giriniz: " ;
cin >> sayi3 ;

    if(sayi1==sayi2 && sayi2==sayi3)      // 1.olasýlýk
	{
        cout << "Eskenar Ucgen" << endl;
    }
        else if(sayi1==sayi2 && sayi2!=sayi3 || sayi2==sayi3 && sayi2!=sayi1 || sayi1==sayi3 && sayi3!=sayi2  ) // 2.olasýlýk
        {
            cout << "Ikizkenar Ucgen" << endl;
        }
            else                         // 1. ve 2. olasýlýk dýþýndaki olasýlýklar
            {
                cout << "Cesitkenar Ucgen" << endl;
            }
}
