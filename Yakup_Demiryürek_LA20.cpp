#include<iostream>
using namespace std;

int faktoriyel(int x)
{	
	int sonuc=1;
	while(x>1)
	{
		sonuc*=x;
		x--;
	}
	return sonuc;
}
int usAlma(int t, int u)
{
	int sonuc=1;
	for(int i=0; i<u; i++)
	{	
		sonuc*=t;
	}
	return sonuc;
}
int mutlak(int n)
{
	if(n<0)
	{
		return n *(-1);
	}
	else
	{	
		return n;
	}
}
int yuvarlama(double v)
{	
	if(v<0)
	{
		v=v-0.5;
		return (int)v;
	}
	else
	{	
		v=v+0.5;
		return (int)v;
	}
}
int main()
{	
	setlocale(LC_ALL,"Turkish");
	int n,taban,ust,m;
	double y;
	char word[3];
	char word1[3];
	cout<<"Denklemler �unlard�r:"<<endl<<"Fakt�riyel:fkt"<<endl<<
	"�s Alma:ual"<<endl<<"Mutlak De�er:mtd"<<endl<<"Yuvarlama:yvl"<<endl;
    yeniden:
	cout<<"L�tfen kullanmak istedi�iniz denklemin kodunu yaz�n�z: ";
    cin>>word;
	if(word[0]=='f' && word[1]=='k' && word[2]=='t')
	{
		cout<<"L�tfen Say� Giriniz: ";
	    cin>>n;
	    cout<<"Sonuc: "<< faktoriyel(n)<< endl;
	}
	else if(word[0]=='u' && word[1]=='a' && word[2]=='l')
	{
		cout<<"Taban Giriniz: ";
		cin>>taban;
		cout<< "�st Giriniz: ";
		cin>>ust;
		cout<<"Sonuc: "<<usAlma(taban,ust)<<endl;
	}
	else if(word[0]=='m' && word[1]=='t' && word[2]=='d')
	{
		cout<<"L�tfen Say� Giriniz: ";
		cin>>m;	
		cout<<"Sonuc: "<<mutlak(m)<< endl;
	}
	else if(word[0]=='y' && word[1]=='v' && word[2]=='l')
	{
		cout<<"L�tfen Say� Giriniz: ";
		cin>>y;	
		cout<<"Sonuc: "<<yuvarlama(y)<<endl;
	}
	else
	{
		return 0;
	}
	cout<<"��lemi Ba�tan almak i�in:new"<<endl<<"��lemi Sonland�rmak i�in:end"<<endl;
	cin>>word1;
	if(word1[0]=='n' && word1[1]=='e' && word1[2]=='w')
	{
	    goto yeniden;
	}
	else if(word1[0]=='e' && word1[1]=='n' && word1[2]=='d')
	{
		cout<<"��lem Sonland�r�ld�"<<endl;
	}
	
	return 0;
}
