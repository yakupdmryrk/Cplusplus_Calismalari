#include <iostream>
using namespace std;

//f(x) = x^3 + 4x^2 + 2x + 6 fonksiyonuna g�re ��kt� �retip ekrana yazd�ran program kodu

int main()
{
    int x; //Tan�mla.
    cout << "Lutfen Sayi Giriniz: " ; //Kullan�c�dan say� al.
    cin >> x;
    cout << ((x*x*x)+(4*x*x)+(2*x)+6) << endl; //Kullan�c�dan al�nan de�er yerine koy.
}
