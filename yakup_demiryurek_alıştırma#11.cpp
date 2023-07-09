#include <iostream>
using namespace std;


int main() 
{
	for(int a=1 ; a<= 10 ; a++) // 1.sayý
	    {          
		cout << " " << endl;
		for (int c=1 ; c<=10 ; c++ ) // 2.sayý
		cout  << a << "x" << c << "=" << a*c << endl ; 
	    }
}
