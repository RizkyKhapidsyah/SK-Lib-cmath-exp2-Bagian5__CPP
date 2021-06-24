// C++ program to illustrate the
// exp2() function for range overflow
#include <cmath>
#include <iostream>
#include <conio.h>

/*	Source by GeeksForGeeks
	Modified For Learn by Rizky Khapidsyah
	I.D.E : VS2019 */

using namespace std;

int main() {
	// overflow will occur as 2^100 will not
	// fit to int data-type
	int n = 100;

	int ans = exp2(n);
	cout << "exp2(100) = " << ans << endl;

	_getch();
	return 0;
}