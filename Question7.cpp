/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
* What is the 10 001st prime number?
*/
#include<iostream>
#include<Math.h>
using namespace std;
int main()
{    
	int count = 0, flag = 0, number = 1, answer = 0;
	while (count < 10001) {
		flag = 0; //let current number be prime
		    if (number == 1)
               flag = 1;
		    if (number % 2 == 0)
               flag = 1; 
			if (number == 2)
              flag = 0;
		double boundary = (int)floor(sqrt(number));
			for (int i = 3; i <= boundary; i += 2) {
				if (number % i == 0)flag = 1;
			}
		if (flag == 0) //number is still prime
		{
			answer = number;
			count++; 
			
		}
		number++;


	}
	cout<< answer;
	return 0;
}
//output - 104743
