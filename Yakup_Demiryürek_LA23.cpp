
#include <iostream>          
using namespace std;
int zamanHesapla(int dy,int sy);//sy=þuanki yýl, dy=doðum yýlý
int zamanHesapla(int dy,int da,int sy,int sa);//sa=þuanki ay, da=doðum ayý
int zamanHesapla(int dy,int da,int dg,int sy,int sa,int sg);//sg=þuanki gün, dy=doðum günü
int zamanHesapla(int dy,int sy)
{
	int sonuc;
	sonuc=sy-dy;               //Olduðumuz yýldan doðum yýlýný çýkar.
    return sonuc;
}
int zamanHesapla(int dy,int da,int sy,int sa)
{
   int sonuc1;
   if(da>sa) 
   {                             //Eðer doðum ayý þuanki aydan büyükse 1 yýl azalt 12 ay arttýrki negatif çýkmasýn.
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
   {                                                   //Eðer doðum ayý þuanki aydan büyükse 1 yýl azalt 12 ay arttýrki negatif çýkmasýn.
    sonuc2=((sy-dy)-1)*365+(sa-da+11)*30+(sg-dg+30);   //Hemde doðum günü þuanki günden büyükse 1 ay azalt 30 gün arttýr ki negatif çýkmasýn.
   }
   else if(sa>da&&dg>sg)
   {
   	sonuc2=(sy-dy)*365+(sa-da-1)*30+(sg-dg-30);       //Yalnýzca doðum günü þuanki günden büyükse 1 ay azalt 30 gün arttýr ki negatif çýkmasýn.
   }
   else if(sa>da&&sg>dg)                              
   {
   	sonuc2=(sy-dy)*365+(sa-da)*30+(sg-dg);
   }
   else if(da>sa&&sg>dg)                             //Yalnýzca doðum ayý þuanki aydan büyükse 1 yýl azalt 12 ay arttýrki negatif çýkmasýn.
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
    if(a==-1) //Doðum ayý istendiðinde -1 girilirse yalnýzca yýl olarak hesapla.
    {
    year=zamanHesapla(y,sy);
	cout << "Yasadiginiz Yil:" << year << endl;	
	}
	else if(g==-1) //Doðum günü istendiðinde -1 girilirse  yýl ve ay olarak hesapla.
	{
	year=zamanHesapla(y,sy);
	cout << "Yasadiginiz Yil:" << year << endl;
	month=zamanHesapla(y,a,sy,sa);
	cout << "Yasadiginiz Ay:" << month << endl;	
	}
	else if(a!=-1||g!=-1) //yýl, ay ve gün olarak hesapla.
	{
	year=zamanHesapla(y,sy);
	month=zamanHesapla(y,a,sy,sa);
	day=zamanHesapla(y,a,g,sy,sa,sg);
	cout << "Yasadiginiz Yil:" << year << endl;
	cout << "Yasadiginiz Ay:" << month << endl;
	cout << "Yasadiginiz Gun:" << day << endl;
    }
}
