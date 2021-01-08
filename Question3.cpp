//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long  n = 600851475143, i = 2,store=2;
	
	while (n % 2 == 0) {
		n = n / 2;
	}
	i++;

	while(n!=1){
		while (n % i == 0)
		{
			n = n / i;
			store=i;
			
		}
		i = i + 2;


	}
			
	
	cout << store;
	return 0;
}
//output - 6857
