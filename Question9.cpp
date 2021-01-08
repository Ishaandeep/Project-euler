/*A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long long product = 0;
	int a, b, c, sum, asquare, bsquare, csquare;
	sum = 1000;
	c = 0;
	asquare = 0, bsquare = 0, csquare = 0;
	for (a = 1; a < sum / 3; a++)
	{
		for (b = 2; b < sum / 2; b++) {
			c = sum - (a + b);
			asquare = a * a;
			bsquare = b * b;
			csquare = c * c;
			if ((asquare + bsquare) == csquare) {
				cout<< a * b * c;
				
			}
		}
	}
    return 0;
}
//output - 31875000
