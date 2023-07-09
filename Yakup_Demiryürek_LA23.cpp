
#include <iostream>          
using namespace std;
int zamanHesapla(int dy,int sy);//sy=�uanki y�l, dy=do�um y�l�
int zamanHesapla(int dy,int da,int sy,int sa);//sa=�uanki ay, da=do�um ay�
int zamanHesapla(int dy,int da,int dg,int sy,int sa,int sg);//sg=�uanki g�n, dy=do�um g�n�
int zamanHesapla(int dy,int sy)
{
	int sonuc;
	sonuc=sy-dy;               //Oldu�umuz y�ldan do�um y�l�n� ��kar.
    return sonuc;
}
int zamanHesapla(int dy,int da,int sy,int sa)
{
   int sonuc1;
   if(da>sa) 
   {                             //E�er do�um ay� �uanki aydan b�y�kse 1 y�l azalt 12 ay artt�rki negatif ��kmas�n.
    sonuc1=(sy-dy-1)*12+(sa-da+12);
   }
   else if(sa>=da)              
   {
   sonuc1=(sy-dy)*12+(sa-da);
   }

   return sonuc1;
}
int zamanHesapla(int dy,int da,int dg,int sy,int sa,int sg)
{
	int sonuc2;
	if(da>sa&&dg>sg)
   {                                                   //E�er do�um ay� �uanki aydan b�y�kse 1 y�l azalt 12 ay artt�rki negatif ��kmas�n.
    sonuc2=((sy-dy)-1)*365+(sa-da+11)*30+(sg-dg+30);   //Hemde do�um g�n� �uanki g�nden b�y�kse 1 ay azalt 30 g�n artt�r ki negatif ��kmas�n.
   }
   else if(sa>da&&dg>sg)
   {
   	sonuc2=(sy-dy)*365+(sa-da-1)*30+(sg-dg-30);       //Yaln�zca do�um g�n� �uanki g�nden b�y�kse 1 ay azalt 30 g�n artt�r ki negatif ��kmas�n.
   }
   else if(sa>da&&sg>dg)                              
   {
   	sonuc2=(sy-dy)*365+(sa-da)*30+(sg-dg);
   }
   else if(da>sa&&sg>dg)                             //Yaln�zca do�um ay� �uanki aydan b�y�kse 1 y�l azalt 12 ay artt�rki negatif ��kmas�n.
   {
   	sonuc2=((sy-dy)-1)*365+(sa-da+12)*30+(sg-dg);
   }
   return sonuc2;
}                                                    

int main()
{
	int y,a,g,sy,sa,sg,year,month,day;
	
	cout << "Dogum Yilinizi Giriniz:";
	cin >> y;
	cout << "Dogum Ayini Giriniz:";
	cin >> a;
	cout << "Dogum Gununu Giriniz:";
	cin >> g;
	cout <<"Suanki Yil:";
	cin >> sy;
    cout <<"Suanki Ay:";
    cin >> sa;
    cout <<"Suanki Gun:";
    cin >> sg;
    if(a==-1) //Do�um ay� istendi�inde -1 girilirse yaln�zca y�l olarak hesapla.
    {
    year=zamanHesapla(y,sy);
	cout << "Yasadiginiz Yil:" << year << endl;	
	}
	else if(g==-1) //Do�um g�n� istendi�inde -1 girilirse  y�l ve ay olarak hesapla.
	{
	year=zamanHesapla(y,sy);
	cout << "Yasadiginiz Yil:" << year << endl;
	month=zamanHesapla(y,a,sy,sa);
	cout << "Yasadiginiz Ay:" << month << endl;	
	}
	else if(a!=-1||g!=-1) //y�l, ay ve g�n olarak hesapla.
	{
	year=zamanHesapla(y,sy);
	month=zamanHesapla(y,a,sy,sa);
	day=zamanHesapla(y,a,g,sy,sa,sg);
	cout << "Yasadiginiz Yil:" << year << endl;
	cout << "Yasadiginiz Ay:" << month << endl;
	cout << "Yasadiginiz Gun:" << day << endl;
    }
}
