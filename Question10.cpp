/*
 The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
 Find the sum of all the primes below two million.
 */
#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;
int main() {
	long long number = 1,sum=0;
	int flag,i;
	while (number != 2000000) {
		flag = 0;                                 //let current number be prime
		if (number == 1)
		  flag = 1;
		if (number % 2 == 0)
		   flag = 1;
		if (number == 2)
		  flag = 0;
		double boundary = (int)floor(sqrt(number));
		for (i = 3; i <= boundary; i += 2) {
			if (number % i == 0)
				flag = 1;
		}
		if (flag == 0) {

			sum += number;
		}
		number++;
			
	}
	cout<<sum;
	return 0;
}
// output - 142913828922
