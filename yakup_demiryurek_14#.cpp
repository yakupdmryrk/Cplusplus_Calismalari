#include <iostream>
using namespace std;
//Kullanýcýn girdiði satýr ve sütun sayýlarýna göre oluþturulan içi boþ dikdörtgen
int main()
{
	int x,y;
	cout << "Satir Sayisi Giriniz:";           //Kullanýcýdan Sayý al.
	cin >> x;                           
	cout << "Sutun Sayisi Giriniz:";           //Kullanýcýdan Sayý al.
	cin >> y;
	for(int i=1; i <= x; i++)                  //Satýr sayýsý
	{
		for(int j=1; j <= y; j++)              //Boþluk mu yoksa yýldýz mý koyacaðýný tanýmla.
		{
			if((i==1)||(j==1)||(i==x)||(j==y)) //Satýra baðlý olarak yýldýz konulmasý gereken yerleri tanýmla.
			cout << "*";                       //Ekrana yýldýz yazdýr.
			
			else                               //Satýra baðlý olarak boþluk konulmasý gereken yerleri tanýmla.
			cout << " ";                       //Ekrana boþluk yazdýr
		}
	cout << endl;
	}
}
