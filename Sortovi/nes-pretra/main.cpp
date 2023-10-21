#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[100] = {1,2,3,4,5,6,7,8,9,98}, i, t;
	bool b = false;
	cout << "upisi broj koji se trazi : ";
	cin >> t;
	for (i = 0; i < 100; i++) {
		if (a[i] == t) {
			b = true;
		}
	}
	if (b == true) {
		cout << "trazeni broj se nalazi u polju";
	}
	else {
		cout << "trazeni broj se ne nalazi u polju";
	}
}
