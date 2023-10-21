#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a[10] = {1,3,5,6,7,8,9,10,102,203}, c, d, t, min = 0, max = 10;
	bool b = false;
	cout << "upisi broj koji se trazi : ";
	cin >> t;
	while (true) {
		d = (min + max) / 2;
		if (a[d] == t) {
			b = true;
			break;
		}
		if (a[d] < t) {
			min = d + 1;
		}
		if (a[d] > t) {
			max = d - 1;
		}
		if (max < min) {
			break;
		}

	}
	if (b == true) {
		cout << "broj se nalazi u polju";
	}
	else {
		cout << "broj se ne nalazi u polju";
	}
}
