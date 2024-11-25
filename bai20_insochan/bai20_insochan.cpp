#include <iostream>
using namespace std;
bool sochan(int so)
{
	int so, tongchan = 0, tongle = 0, tong = 0;
	cout << "nhap so: "; cin >> so;
	for (int i = 1; i < 100; i++)
	{
		tong += i; 
		if (i % 2 == 0)
		{
			cout << i << "";
			tongchan += i;
		}
		else {
			tongle += i;
		}
	}
	cout << "tong cac so chan:\n" << tongchan << endl;
	cout << "tong cac so le:\n" << tongle << endl;
	cout << "tong cac so tu 1:\n" << tong << endl;
	return 0;
}
