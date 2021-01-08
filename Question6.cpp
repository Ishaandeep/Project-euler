/*The sum of the squares of the first ten natural numbers is,
*The square of the sum of the first ten natural numbers is,
*Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is .
*3025-385=2640
*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	long i, sumOfSquare = 0,squareOfSum=0;
	for (i = 1; i <= 100; i++) {
		sumOfSquare += i * i;
		squareOfSum += i;

	}
	cout << abs(sumOfSquare - (squareOfSum * squareOfSum));
	return 0;
}
//output - 25164150
