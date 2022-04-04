// Klass NSD and NSK.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class NSD {
private:
	int a;
	int b;
public:
	NSD()
	{		
		a = 1;
		b = 1;
	}
	NSD(int a, int b) {
		
		this->a = a;
		this->b = b;
		int nsk = 0;
		int nsd = 0;
		int c;
		c = a * b;
		while (a > 0 && b > 0) {
			if (a > b) a %= b;
			else b %= a;
		}
		nsd = a + b;	
		nsk = c / nsd;
		cout << "NSD = " << nsd << endl;
		cout << "NSK = " << nsk << endl;
	}	
	void output() {
		cout << "Number #1: " << a << endl;
		cout << "Number #2: " << b << endl;
	}		
};
int main()
{
	NSD first(6, 14);
	first.output();
}
