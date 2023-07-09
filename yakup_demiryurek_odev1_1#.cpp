#include <iostream>
using namespace std;

//f(x) = x^3 + 4x^2 + 2x + 6 fonksiyonuna göre çýktý üretip ekrana yazdýran program kodu

int main()
{
    int x; //Tanýmla.
    cout << "Lutfen Sayi Giriniz: " ; //Kullanýcýdan sayý al.
    cin >> x;
    cout << ((x*x*x)+(4*x*x)+(2*x)+6) << endl; //Kullanýcýdan alýnan deðer yerine koy.
}
