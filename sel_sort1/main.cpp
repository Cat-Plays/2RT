#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int A[7] = {2,3,4,8,7,9,1},i,b,c,d;
	for(i = 0; i < 7; i++) {
		for(c = i; c < 7; c++) {
				if(A[i] > A[c]) {
					d = A[c];
					A[c] = A[i];
					A[i] = d;
				}
		}
	}
	for(i = 0; i < 7; i++) {
		cout << A[i] << " ";
	}
}
