#include <iostream>

using namespace std;

int main()
{
	int sayi ;
	cout << "Lutfen Sayi Giriniz: " << endl ;
	cin >> sayi ;
	if (sayi%2==0 && sayi%3==0)
	{
	cout << "2 ve 3'un kati" << endl ;
	}
	else if ( sayi%2==0 && sayi%3!=0) 
	{
	cout << "2'nin kati" << endl ;
	}
	else if (sayi%2!=0 && sayi%3==0)
	{	
	cout << "3'un kati"	<< endl ;
	}
	else 
	{
	cout << "2 ve 3'un kati degil" << endl ;
	}
	return 0;
}
